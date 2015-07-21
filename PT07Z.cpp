#include<cstdio>
#include<vector>
#include<cstring>
#include<queue>
#include<map>
#include<utility>
#include<iostream>
#define rl(x) scanf("%d",&x)
using namespace std;
int cou=0,x;
#define pii pair<int,int>
vector<pii>G[10005];
int main()
{
	int n,u,v,x,dis,res,m=0,ed;
	rl(n);
	int vis[n+5];
	for(int i=0;i<n-1;i++)
	{
		rl(u),rl(v);
		G[u].push_back(pii(v,0));
		G[v].push_back(pii(u,0));
	}
	memset(vis,0,sizeof(vis));
	queue<pii>Q;
	Q.push(pii(1,0));
	vis[1]=1;
	while(!Q.empty())
	{
		 x=Q.front().first;
		for(int i=0;i<G[x].size();i++)
		{
			ed=G[x][i].first;
			 
			if(!vis[ed])
			{
				vis[ed]=1;
				dis=Q.front().second+1;
				if(m<=dis)
				{		
					m=dis;
					res=ed;
				}
				Q.push(pii(ed,dis));
			}
		}
		Q.pop();
	}
	memset(vis,0,sizeof(vis));
	//printf("\n%d %d \n",res,m);
	Q.push(pii(res,0));
	vis[res]=1;
	while(!Q.empty())
	{
		 x=Q.front().first;
		for(int i=0;i<G[x].size();i++)
		{
			ed=G[x][i].first;
			if(!vis[ed])
			{
				vis[ed]=1;
				dis=Q.front().second+1;
				if(m<=dis)
				{		
					m=dis;
					res=ed;
				}
				//cout<<"pushing "<<ed<<" "<<dis<<endl;
				Q.push(pii(ed,dis));
			}
		}
		Q.pop();
	}
	printf("%d\n",dis);
	
} 
