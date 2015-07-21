#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<list>
#define ll long long
#define ri(T) scanf("%d",&T)
#define rl(T) scanf("%lld",&T)
#define MOD 1000000007
using namespace std;
ll pow(ll a, ll b)
{
	ll x = 1, y = a;
	while(b > 0) 
	{
        if(b%2 == 1) 
		{
            	x=(x*y);
            	if(x>MOD) 
		x%=MOD;
        	}
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    	}
    return x;
}
ll ncr(ll n,ll r)
{
	r=min(r,n-r);
	if(n==0||n==1||r==0)
	return 1;
	ll num=1,den=1;
	for(ll i=n;i>n-r;i--)
	num=(num*i)%MOD;
	for(ll i=r;i>1;i--)
	den=(den*i)%MOD;
	den=pow(den,MOD-2);
	return (den*num)%MOD;
}
int main()
{
	ll t,n,w,r;
	{
		ll res=1;
		rl(n),rl(w),rl(t),rl(r);
		res=(ncr(n,w))%MOD;
		res=(ncr(n-w,t)*res)%MOD;
		res=(ncr(n-w-t,r)*res)%MOD;
		printf("%lld\n",res);
	}
	return 0;
} 
