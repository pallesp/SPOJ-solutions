#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long a1,n,j,i,a3,a33,b,c,d,e,f,s,k;
	int t;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%lld%lld%lld",&a3,&a33,&s);
		n=(2*s)/(a3+a33);
		d=(a33-a3)/(n-5);
		a1=a3-2*d;
		printf("%lld\n",n);
		for(i=1;i<=n;i++)
		{
			printf("%lld ",a1);
			a1=a1+d;
		}
		printf("\n");
	}
	return 0;
}
