#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;
int a[100000000];
/*int check()
{
	memset(a,1,sizeof a);
	for(long long i=0;i<25000000;i++)
	{
		a[4*i+3]=0;
	}
	//return 1;
}*/
int main()
{
	//check();
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,x,y,rem,f=0;
		scanf("%lld",&n);
		x=sqrt(n/2)-1;
		for(long long i=x;i*i<=n;i++)
		{
			rem=n-i*i;
			y=sqrt(rem);
			if(y*y==rem && i*i+y*y==n)
			{
			f=1;break;
			}
		}
		if(f)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
