#include<iostream>
#include<cstring>
#include<cstdio>
#define ll long long
#define MOD 1000000007
using namespace std;
ll u,v,x,y;
/*ll f[][2]={{1,1},{1,0}};
ll a[][2]={{1,0},{0,1}};*/
ll res[2][2];
ll fib(ll n)
{
	ll f[][2]={{1,1},{1,0}};
	ll a[][2]={{1,0},{0,1}};
	while(n)
	{
		if(n==0)
		return 0;
		if(n&1)
		{
			memset(res,0,sizeof res);
			x=(a[0][0]*f[0][0]+a[0][1]*f[1][0])%MOD;
			y=(a[0][0]*f[0][1]+a[0][1]*f[1][1])%MOD;
			u=(a[1][0]*f[0][0]+a[1][1]*f[1][0])%MOD;
			v=(a[1][0]*f[0][1]+a[1][1]*f[1][1])%MOD;
			a[0][0]=x,a[0][1]=y,a[1][0]=u,a[1][1]=v;
		}
			x=(f[0][0]*f[0][0]+f[0][1]*f[1][0])%MOD;
			y=(f[0][0]*f[0][1]+f[0][1]*f[1][1])%MOD;
			u=(f[1][0]*f[0][0]+f[1][1]*f[1][0])%MOD;
			v=(f[1][0]*f[0][1]+f[1][1]*f[1][1])%MOD;
			f[0][0]=x,f[0][1]=y,f[1][0]=u,f[1][1]=v;
		n>>=1;
	}
	return a[0][1];
}
int main()
{
	long long t,m,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		//cout<<fib(m+2)<<endl;
		//cout<<fib(n+1)<<endl;
		cout<<(fib(n+2)-fib(m+1)+MOD)%MOD<<endl;
		
		//cout<<(fib(m+2))%MOD<<endl;
	}
	
} 
