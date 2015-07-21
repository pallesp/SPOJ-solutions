#include<cstdio>
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(!(n&1))
		{
			long long x,ans=0;
			while(n)
			{
				ans<<=1;
				x=n%2;
				ans|=x;
				n>>=1;
			}
			printf("%lld\n",ans);
		}
		else
			printf("%lld\n",n);
	}
} 
