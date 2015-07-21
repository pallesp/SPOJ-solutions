
#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<vector>
#include<cstdio>
#include<cctype>
#include<deque>
#include<bitset>
#include<utility>
#include<climits>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;
//#include<sai>   tHe lAzY PrOgRmMeR :)
#define rl(T) scanf("%lld",&T)
#define ri(T) scanf("%d",&T)
#define rs(T) scanf("%s",T)
#define rc(T) scanf("%c",&T)
#define loop(i,a,n) for(long long i=a;i<n;i++)
#define loopn(i,a,n) for(long long i=1;i<=n;i++)
#define ll  long long int
#define MOD 60000
map<string,ll>mp;
ll tree[MOD],c[MOD];
string a[MOD],b[MOD];
ll query_tree(ll x)
{
	ll sum=0;
	while(x>0)
	{
		sum+=tree[x];
		x-=(x&-x);
		//cout<<"sum"<<endl;
	}
	return sum;
}
void update_tree(ll x,ll val)
{
	while(x<=MOD)
	{
		tree[x]+=val;
		x+=(x&-x);
		//cout<<x<<endl;
		//cout<<"sum"<<endl;
	}
}
using namespace std;	
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		ll n;
		ll inv=0;
		rl(n);
		memset(tree,0,sizeof tree);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];	
		}
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
			mp[b[i]]=i;	
		}
		for(ll i=0;i<n;i++)
		{
			c[i]=mp[a[i]]+1;
			//cout<<c[i]<<" ";	
		}
		//out<<endl;
		for(ll i=n-1;i>=0;i--)
		{
			inv+=query_tree(c[i]-1);
			update_tree(c[i],1);
		}
		printf("%lld\n",inv);
	}
}
