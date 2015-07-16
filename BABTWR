//InCluDeS LaZy PrOgRaMmEr
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<utility>
#include<vector>
#include<iostream>
#include<algorithm>
//=============MaCrOs================
#define ll long long
#define x first
#define y second
//#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define pii pair<int,int>
#define pi2 pair<int,pii>
#define set(arr) memset(arr,0,sizeof arr)
#define FOR(a,N) for(ll i=a;i<N;i++)
#define FORE(a,N) FOR(a,N+1)
#define gc getchar_unlocked
using namespace std;
void ri(ll &x)
{
    register ll c = gc();
    x = 0;
    ll neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
bool cmp(const pair<ll,pair<ll,ll> >&a,const pair<ll,pair<ll,ll> >&b)
{
	return a.y.x*a.y.y>=b.y.x*b.y.y;
}
int main()
{
	ll n;
	
	while(1)
	{
		ri(n);
		if(n==0)
		break;
		ll h,w,d;
		vector<pi2> v;
		vector<pi2> v2;
		FOR(0,n)
		{
			ri(h),ri(d),ri(w);
			v.push_back(pi2(h,pii(w,d)));
			
		}
		for(ll i=0;i<n;i++)
		{
			v2.push_back(v[i]);
			//ll a=,b,c;
			
			//v2.push_back(pi2(a,pii(c,b)));
			//v2.push_back(pi2(a,pii(c,b)));
			//v2.push_back(pi2(v[i].y.y,pii(max(v[i].x,v[i].y.x),min(v[i].x,v[i].y.x))));
			//v2.push_back(pi2(v[i].y.x,pii(max(v[i].x,v[i].y.y),min(v[i].x,v[i].y.y))));
			v2.push_back(pi2(v[i].x,pii(v[i].y.y,v[i].y.x)));
			v2.push_back(pi2(v[i].y.x,pii(v[i].x,v[i].y.y)));
			v2.push_back(pi2(v[i].y.x,pii(v[i].y.y,v[i].x)));
			v2.push_back(pi2(v[i].y.y,pii(v[i].x,v[i].y.x)));
			v2.push_back(pi2(v[i].y.y,pii(v[i].y.x,v[i].x)));
		}
		sort(v2.begin(),v2.end(),cmp);
		ll n=v2.size();
		ll ans[n];	
		for(ll i=0;i<n;i++)
		ans[i]=v2[i].x;
		for(ll i=1;i<n;i++)
		   for(ll j=0;j<i;j++)
			if(v2[j].y.x>v2[i].y.x && v2[j].y.y>v2[i].y.y && ans[i]<ans[j]+v2[i].x)
			ans[i]=ans[j]+v2[i].x;
		ll res=0;	
		for(ll i=0;i<v2.size();i++)
		//cout<<v2[i].x<<" "<<v2[i].y.x<<" "<<v2[i].y.y<<endl;			
		for(ll i=0;i<v2.size();i++)
		{
			res=max(res,ans[i]);
		}
		cout<<res<<endl;
	}
	
	
}
