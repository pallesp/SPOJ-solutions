//C++ implemantation of EdmondKarp Algorithm
#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
using namespace std;
#define MAX 201
#define INF 9999999
#define LL long long
#define ri(x) scanf("%d",&x)
int G[MAX][MAX],parent[MAX],vis[MAX];
int n;
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
			for(int i=1;i<=n;i++)
			{
				if(parent[i]==-1 and G[u][i]>0)
				{
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
	int t;
	ri(t);
	while(t--)
	{
		memset(G,0,sizeof G);
		ri(n);
		for(int i=1;i<n;i++)
		{
			int m;
			ri(m);
			while(m--)
			{
				int x;
				ri(x);
				if(i==1 || x==n)
				G[i][x]=1;
				else
				G[i][x]=INF;
			}
			
		}
		printf("%lld\n",EdmondKarp(1,n));
	}
}
