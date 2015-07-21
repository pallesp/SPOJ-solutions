
#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<queue>
using namespace std;
#define ll long long
#define MAX 500005
#define pii pair<ll,ll>
#define rl(x) scanf("%lld",&x)
vector<pii>G[MAX];
pii bfs(ll x,ll n)
{
	ll vis[n+10],dis[n+10],u,v,w,m=0,sz,ind;
	queue<pii>Q;
	memset(dis,0,sizeof dis);
	memset(vis,0,sizeof vis);
	Q.push(pii(x,0));
	while(!Q.empty())
	{
		u=Q.front().first;
		sz=G[u].size();
		Q.pop();	
		for(ll i=0;i<sz;i++)
		{
			v=G[u][i].first;
			w=G[u][i].second;
			if(!vis[v])
			{
				
				dis[v]=dis[u]+w;
				//cout<<"dis["<<v<<"]"<<" "<<dis[v]<<endl;
				Q.push(pii(v,dis[v]));
			}
		}
		//cout<<u<<endl;	
		vis[u]=1;
	}
	for(ll i=1;i<=n;i++)
	{
		if(m<dis[i])
		{
			m=dis[i];
			ind=i;
		}
	}
	return pii(ind,m);
}
int main()
{
	ll t,u,v,w,res;
	rl(t);
	while(t--)
	{
		ll n;
		rl(n);
		for(ll i=1;i<n;i++)
		{
			rl(u),rl(v),rl(w);
			G[u].push_back(pii(v,w));
			G[v].push_back(pii(u,w));
		}
		ll st=bfs(1,n).first;
		ll res=bfs(st,n).second;		
		printf("%lld\n",res);
		for(ll i=1;i<=n;i++)
		G[i].clear();
	}
} 
