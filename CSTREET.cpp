    #include<cstdio>
    #include<iostream>
    #include<cstring>
    #include<vector>
    #include<map>
    #include<algorithm>
    #include<utility>
    #include<climits>
    using namespace std;
    #define MAX 300000
    #define edge pair< ll,ll>
    #define ll long long
    #define rl(x) scanf("%lld",&x);
    vector< pair<ll,edge> >G,MST;
    ll parent[MAX];
    void reset(ll n)
    {
    	G.clear();
    	MST.clear();
    	for(ll i=0;i<=n;i++)
    	parent[i]=i;
    	
    }
    ll find(ll x)
    {
    	if(x!=parent[x])
    	parent[x]=find(parent[x]);
    	return parent[x];
    }
    int main()
    {
    	ll t;
    	rl(t);
    	while(t--)
    	{
    		ll n,e,u,v,w,pu,pv,total=0,p;
    		rl(p);
    		rl(n);rl(e);
    		reset(n);
    		for(ll i=0;i<e;i++)
    		{
    			rl(u);rl(v);rl(w);
    			G.push_back(pair<int,edge >(w,make_pair(u,v)));
    		}
    		sort(G.begin(),G.end());
    		for(ll i=0;i<e;i++)
    		{
    			pu=find(G[i].second.first);	
    			pv=find(G[i].second.second);
    			if((pu)!=(pv))
    			{
    				MST.push_back(G[i]);
    				total+=G[i].first;
    				parent[pu]=parent[pv];
    			}
    		}
    		/*for(ll i=0;i<MST.size();i++)
    		{
    			cout<<"("<<MST[i].second.first<<" "<<MST[i].second.second<<" ) :"<<MST[i].first<<endl;
    		}*/
    		//cout<<"Mimimum cost for spanning tree is :"<<total*p<<endl;
    		printf("%lld\n",p*total);
    	}
    } 
