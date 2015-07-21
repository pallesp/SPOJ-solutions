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
#define MOD 505000
ll tree[MOD],a[MOD],b[MOD];
ll query_tree(ll x)
{
	ll sum=0;
	while(x>0)
	{
		sum+=tree[x];
		x-=(x&-x);
	}
	return sum;
}
void update_tree(ll x,ll val)
{
	while(x<=MOD)
	{
		tree[x]+=val;
		x+=(x&-x);
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
			rl(a[i]);
			b[i]=a[i];	
		}
		sort(b,b+n);
		//cout<<endl;
		for(ll i=0;i<n;i++)
		{
			a[i]=(int)(lower_bound(b,b+n,a[i])-b)+1;
			//cout<<a[i]<<" ";	
		}
		for(ll i=n-1;i>=0;i--)
		{
			inv+=query_tree(a[i]-1);
			update_tree(a[i],1);
		}
		printf("%lld\n",inv);
	
