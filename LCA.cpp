#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
#define MAX 1010
#define MAXLVL 12
#define rl(x) scanf("%d",&x)
int parent[MAX+12],dp[MAXLVL+2][MAX],depth[MAXLVL+12];
int LCA(int u, int v) 
{
	if(depth[u] < depth[v]) 
	swap(u,v);
	int diff = depth[u] - depth[v];
	for(int i=0; i<MAXLVL; i++) 
	if( (diff>>i)&1 ) 
	{
		u = dp[i][u];
	}
	if(u == v) 
	return u;
	for(int i=MAXLVL-1; i>=0; i--) 
	if(dp[i][u] != dp[i][v]) 
	{
		u = dp[i][u];
		v = dp[i][v];
	}
	return dp[0][u];
}
int main()
{
	int t,ca=1;
	rl(t);
	while(ca<=t)
	{
		int n,m;
		rl(n);
		memset(depth,0,sizeof depth);
		parent[0]=-1;
		for(int i=0;i<n;i++)
		{
			rl(m);
			while(m--)
			{
				int x,y;
				rl(y);
				y--;
				depth[y]=depth[i]+1;
				parent[y]=i;
			}
		}
		for(int i=0;i<MAXLVL;i++)
		    for(int j=0; j<n; j++)
			dp[i][j]=-1;
		for(int i=0;i<n;i++)
			dp[0][i]=parent[i];
		for(int i=1; i<MAXLVL; i++)
			for(int j=0; j<n; j++)
				if(dp[i-1][j] != -1)
					dp[i][j] = dp[i-1][dp[i-1][j]];
 
		printf("Case %d:\n",ca);
		int q,x,y;
		rl(q);
		while(q--)
		{
			cin>>x>>y;
			x--,y--;
			cout<<LCA(x,y)+1<<endl;
		}
		ca++;
		
	}
} 
