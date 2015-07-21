#include<cstdio>
#include<deque>
#define rl(x) scanf("%lld",&x)
#define ll long long
using namespace std;
int main()
{
	ll t;
	//rl(t);
	//while(t--)
	{
		ll n,k;
		rl(n);
		ll a[n+10];
		for(ll i=0;i<n;i++)
		rl(a[i]);
		rl(k);
		deque<ll>dq(k);
		for(int i=0;i<k;i++)
		{
			while(!dq.empty() && a[i]>=a[dq.back()])
			dq.pop_back();
			dq.push_back(i);
 
		}
		for(ll i=k;i<n;i++)
		{
			printf("%lld ",a[dq.front()]);
			while(!dq.empty() && dq.front()<=i-k)
			dq.pop_front();
			while(!dq.empty() && a[i]>=a[dq.back()])
			dq.pop_back();
			dq.push_back(i);
		}
		printf("%lld\n",a[dq.front()]);
	}
} 
