#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<cstring>
#include<climits>
#include<utility>
#define rl(x) scanf("%d",&x)
#define ll int
using namespace std;
int dx[]= {0,-2,-1, 1, 2, 2,1,-1,-2};
int dy[]= {0,-1,-2,-2,-1, 1,2, 2, 1};
int vis[9][9],cos[9][9],x1,y1,x2,y2,x3,y3,c,u,v,u1,v1,res;
#define pii pair<int,int>
#define pi2 pair<int,pii>
int main()
{
	while(cin>>x1>>y1>>x2>>y2)
	{
		memset(vis,0,sizeof vis);
		priority_queue< pi2 > Q;
		Q.push(pi2(0,pii(x1,y1)));
		while(!Q.empty())
		{
			int u1=Q.top().second.first;
			int v1=Q.top().second.second;
			int c=-Q.top().first;
			if(u1==x2 && v1==y2)
			{
			printf("%d\n",c);break;
			}
			Q.pop();
			if(!vis[u1][v1])
			{
				for(int i=1;i<=8;i++)
				{
					u=u1+dx[i];
					v=v1+dy[i];
					res=c+(u1*u+v1*v);
					if(u>=0 && u<=7 && v>=0 && v<=7 && !vis[u][v])
					{
						Q.push(pi2(-res,pii(u,v)));
					}
				}
				vis[u1][v1]=1;
			}
		}
 
	}
} 
