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
#include<stdio.h>
ll pow(ll a,ll b,ll m)
{
	ll x=1,y=a;
	while(b>0)
	{
    		if(b%2!=0)
		{
		     x=(x*y)%m;
        	}
    		y=(y*y)%m;
    	b>>=1;
  	}
  	return x;
}
int main()
{
	ll t,n,p,res;
	rl(t);
	while(t--)
	{
		res=1;
		rl(n),rl(p);
		if(n>=p)
		{
			printf("0\n");
			continue;
		}
		for(ll i=n+1;i<p;i++)
		{	
			res=(res*i)%p;
		}
		ll x=-pow(res,p-2,p)%p;
		cout<<x+p<<endl;
	}
} 
