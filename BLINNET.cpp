#include<cstdio>
#include<algorithm>
#include<vector>
#include<map>
#include<iostream>
#include<utility>
#define ll long long
#define rl(x) scanf("%lld",&x)
#define pii pair<ll,ll>
#define pi2 pair<ll,pii>
using namespace std;
vector<pi2>G;
ll parent[10010];
ll find(ll x)
{
	if(x!=parent[x])
	parent[x]=find(parent[x]);
	return parent[x];
}
int main()
{
	ll t,n,x,y,no_cit,res=0,pu,pv,ed;
	rl(t);
	while(t--)
	{
		G.clear();
		cin>>n;
		for(ll i=1;i<=n;i++)
		{
			string s;
			cin>>s>>ed;
			parent[i]=i;
			while(ed--)
			{
				cin>>x>>y;
				G.push_back(pi2(y,pii(i,x)));
			}
		}
		sort(G.begin(),G.end());
		ll res=0;
		ll sz=G.size();
		for(ll i=0;i<sz;i++)
		{
			pu=find(G[i].second.first);
			pv=find(G[i].second.second);
			if(pu!=pv)
			{
			res+=G[i].first;
			parent[pu]=parent[pv];
			}
		
		}
		printf("%lld\n",res);
		
	}	
} 
