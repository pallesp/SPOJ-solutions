#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<queue>
#include<list>
#include<algorithm>
using namespace std;
#define ll long long
#define rl(x) scanf("%lld",&x)
ll vis[2500],t,n;
ll g[2500][2500];
queue<ll>qq;
bool runBfs(ll src)
{
	ll s=src;
	qq.push(s);
	while(!qq.empty())
	{
		s=qq.front();
		qq.pop();
		for(ll i=0;i<=n;i++)
		{
			if(g[s][i] && vis[i]==-1)
			{	
				vis[i]=(vis[s]==1)?0:1;
				qq.push(i);
			}
			else if(g[s][i] && vis[s]==vis[i])
			{
			return true;
			}
		}
	}
	return false;
}
int main()
{
	ll t,k=1;
	rl(t);
	while(k<=t)
	{
		ll q;
		bool f;
		rl(n),rl(q);
		memset(g,0,sizeof g);
		while(q--)
		{
			ll a,b;
			rl(a),rl(b);
			g[a][b]=1;
			g[b][a]=1;
		}
		for(ll i=0;i<=n;i++)
		vis[i]=-1;
		for(ll i=0;i<=n;i++)
		{
			if(vis[i]==-1)
			{
				vis[i]=1;
				f=runBfs(i);
			}
			if(f)
			break;
		}
		printf("Scenario #%lld:\n",k);
		if(f) 
		printf("Suspicious bugs found!\n");
		else 
		printf("No suspicious bugs found!\n");
		k++;
		
	}
	cout<<endl;	
} 
