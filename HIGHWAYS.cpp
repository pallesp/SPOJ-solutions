#include<cstdio>
#include<vector>
#include<cstring>
#include<map>
#include<queue>
#include<iostream>
using namespace std;
#define MAX 100005
#define ll long long
#define pii pair<ll,ll>
#define INF 30000
#define rl(x) scanf("%lld",&x)
vector<pii>G[MAX];
ll n,u,v,w,q,x,y,que,m,dist[MAX],f[MAX],sz,st,end;
void dijkstra(ll st)
{
	for(ll i=1;i<=n;i++)
	dist[i]=INF,f[i]=0;
	dist[st]=0;
	priority_queue< pii, vector< pii >, greater< pii > > Q;
	Q.push(pii(0,st));
	while(!Q.empty())
	{
		u=Q.top().second;
		sz=G[u].size();Q.pop();
		if(f[u])continue;
		for(ll i=0;i<sz;i++)
		{
			w=G[u][i].second;
			v=G[u][i].first;
			if(!f[u] && dist[u]+w<dist[v]){
			dist[v]=dist[u]+w;
			Q.push(pii(dist[v],v));}
		}
		f[u]=1;
		if(u==end)break;
	}
	
}
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		rl(n),rl(m),rl(st),rl(end);
		for(ll i=0;i<m;i++)
		{
			rl(u),rl(v),rl(w);
			G[u].push_back(pii(v,w));
			G[v].push_back(pii(u,w));
		}
		dijkstra(st);
		if(dist[end]>=INF)
		printf("NONE\n");
		else
		printf("%lld\n",dist[end]);
		for(int i=0;i<=n;i++)
		G[i].clear();
	}
} 
