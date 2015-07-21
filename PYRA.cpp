#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define MAX 10005
#define ll int
#define rl(x) scanf("%d",&x)
vector<int>G[MAX];
int vis[MAX],dis[MAX],k;
int dfs(int u)
{
	for(int i=0;i<G[u].size();i++)
	{
		int v=G[u][i];
		if(!vis[v])
		{
			vis[v]=1;
			dis[u] += 1 + dfs(v);
		}
	}
	return dis[u]=dis[u]+1;
}
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		ll n,sum=0,x,y;
		rl(n);
		k=0;
		for(int i=0;i<MAX;i++)
		{
			vis[i]=0;
			dis[i]=0;
			G[i].clear();
		}
		while(k<n-1)
		{
			rl(x),rl(y);
			G[x].push_back(y);	
			G[y].push_back(x);
			k++;
		}
		vis[0]=1;
		dfs(0);
		for(int i=0;i<n;i++)
		{
			sum+=dis[i];
			//cout<<dis[i]<<endl;
		}
		cout<<sum<<endl;
	}
} 
