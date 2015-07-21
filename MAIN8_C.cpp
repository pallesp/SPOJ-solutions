#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define ll long long
#define rl(x) scanf("%lld",&x)
ll n,k;
ll result(ll *a,ll x)
{
	ll temp=k;
	for(ll i=n-1;i>=0;i--)
	{
		temp-=(a[i]/x);
		//printf("when x is %lld the k is %lld \n",x,k);
		if(temp<=0)
		return 1;
	}
	return 0;
}
ll bin_search(ll *a)
{
	ll low=1,high=a[n-1]+1,mid;
	while(low<high)
	{
		mid=(low+high)>>1;
		if(result(a,mid))
		{
		//printf("ok when :%lld\n",mid);
		low=mid+1;
		}
		else
		high=mid;
	}
	return low-1;
}
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		rl(n),rl(k);
		ll a[n+2];
		for(int i=0;i<n;i++)
		rl(a[i]);
		sort(a,a+n);
		//for(ll i=0;i<n;i++)
		//printf("%lld\n",a[i]);
		
		printf("%lld\n",bin_search(a));
 
	}
} 
