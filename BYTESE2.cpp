#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define ll long long
#define rl(x) scanf("%lld",&x)
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		ll n;
		rl(n);
		ll a[n],b[n],res=0,ans=0;
		for(ll i=0;i<n;i++)
		rl(a[i]),rl(b[i]);
		sort(a,a+n);
		sort(b,b+n);
		for(ll i=0,j=0;i<n&&j<n;)
		{
			if(a[i]<b[j])
			res++,i++;
			else
			res--,j++;
			ans=max(ans,res);
		}
		printf("%lld\n",ans);
	}
} 
