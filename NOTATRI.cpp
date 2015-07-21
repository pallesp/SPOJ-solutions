#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define rl(x) scanf("%lld",&x)
int main()
{
	ll n;
	rl(n);
	while(n)
	{
		ll a[n],ans=0;
		for(ll i=0;i<n;i++)
		rl(a[i]);
		sort(a,a+n);
		for(ll i=n-1;i>=2;i--)
		{
			ll st=0,end=i-1;
			while(st<end)
			{
				if(a[st]+a[end]<a[i])
				{
					ans+=(end-st);
					st++;
				}
				else
					end--;
			}
		}
		cout<<ans<<endl;
		rl(n);
	}
} 
