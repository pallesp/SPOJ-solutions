#include<cstdio>
#include<vector>
#include<cstring>
#include<map>
#include<queue>
#include<iostream>
using namespace std;
#define MAX 10005
#define ll int
#define pii pair<int,int>
#define INF 30000
#define rl(x) scanf("%d",&x)
vector<pii>G[MAX];
int n,u,v,w,q,x,y,que,dist[MAX],f[MAX],sz;
void dijkstra(ll st)
{
	for(int i=1;i<=n;i++)
	dist[i]=INF,f[i]=0;
	dist[st]=0;
	priority_queue< pii, vector< pii >, greater< pii > > Q;
	Q.push(pii(0,st));
	while(!Q.empty())
	{
		u=Q.top().second;
		sz=G[u].size();Q.pop();
		if(f[u])continue;
		for(int i=0;i<sz;i++)
		{
			w=G[u][i].second;
			v=G[u][i].first;
			if(!f[u] && dist[u]+w<dist[v]){
			dist[v]=dist[u]+w;
			Q.push(pii(dist[v],v));}
		}
		f[u]=1;
		if(u==y)break;
	}
	
}
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		rl(n);
		map<string,int>mp;
		for(ll i=1;i<=n;i++)
		{
			char s[1000];
			//printf("Enter citi name:\n");
			scanf("%s",s);
			string s1(s);
			u=mp[s1]=i;
			cin>>q;
			while(q--)
			{
				rl(v),rl(w);
				G[u].push_back(pii(v,w));
			}
			
		}
		rl(que);
		while(que--)
		{
			char st[1000],end[1000];
			scanf("%s%s",st,end);
			string st1(st),end1(end);
			x=mp[st1],y=mp[end1];
			dijkstra(x);
			//for(int i=1;i<=n;i++)
			printf("%d\n",dist[y]);
		}
		for(int i=0;i<=n;i++)
		G[i].clear();
		mp.clear();
	}
}
