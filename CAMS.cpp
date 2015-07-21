#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;
#define MAX 30000
#define ll long long
#define rl(x) scanf("%lld",&x)
vector<ll>G[100000];
ll t,n,e;
void dfs(ll u,ll *vis)
{
	vis[u]=1;
	for(ll i=0;i<G[u].size();i++)
	if(!vis[G[u][i]])
	dfs(G[u][i],vis);
}
int main()
{
	rl(t);
	while(t--)
	{
		rl(n),rl(e);
		ll vis[n],u,v,c=0;
		for(ll i=0;i<e;i++)
		{
			//printf("%lld\n",i);			
			rl(u),rl(v);
			G[u].push_back(v);	
			G[v].push_back(u);
		}
		//printf("Grap ");
		memset(vis,0,sizeof vis);
		for(ll i=0;i<n;i++)
		{
			if(!vis[i])
			{
				c++;
				dfs(i,vis);
			}
		}
		printf("%lld\n",c);
		for(ll i=0;i<n;i++)
		G[i].clear();
	}
} 
