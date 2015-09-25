//PrOgAmEr@2015
//GRAPHS
#include<set>
#include<map>
#include<cmath>
#include<vector>
#include<queue>
#include<bitset>
#include<cstdio>
#include<cstring>
#include<utility>
#include<iostream>
#include<algorithm>
//#include<sAi> // lAzY ProGrAmEr :)
using namespace std;
#define INF 99999999
#define LL long long
#define MAX 123
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define len(x) x.length()
#define maxi(a,b) a>b?a:b
#define mini(a,b) a>b?b:a
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORE(i,a,n) for(int i=a;i<=n;i++)
int G[MAX][MAX],parent[MAX],n,m;
bool vis[MAX];
LL EdmondKarp(int st,int t )
{	
	LL flow=0;
	while(1)
	{
		queue<int>Q;
		memset(vis,0,sizeof vis);
		memset(parent,-1,sizeof parent);
		vis[st]=true;
		Q.push(st);
		int path=INF;
		parent[st]=st;
		while(!Q.empty())
		{
			int u=Q.front();Q.pop();
			//cout<<(char)(u+'A')<<endl;
			for(int i=1;i<=MAX;i++)
			{
				//cout<<G[u][i]<<endl;
				if(parent[i]==-1 and G[u][i]>0)
				{
					//cout<<u+'A'<<" "<<i+'A'<<endl;
					path=min(path,G[u][i]);
					parent[i]=u;
					if(i!=t)
					Q.push(i);
					else
					{
						while(parent[i]!=i)
						{
							u=parent[i];
							G[u][i]-=path;
							G[i][u]+=path;
							i=u;
						}
						flow+=path;
						break;
					}
				}
			}
		}
		if(parent[t]==-1)
		break;
	}
	return flow;
}
int main()
{
	int m;
	ri(m);
	memset(G,0,sizeof G);
	while(m--)
	{
		char a,b;
		int cost;
		cin>>a>>b>>cost;
		G[a][b]+=cost;
		
	}
	printf("%lld\n",EdmondKarp('A','Z'));
} 
