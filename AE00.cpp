#include<cstdio>
using namespace std;
int main()
{
	long long t,k=0;
	scanf("%lld",&t);
	for(int i=1;i<=t;i++)
	{
		for(int j=i;j<=t;j++)
		{
			if(i*j>t)
			break;
			k++;
		}
	}
	printf("%lld\n",k);
} 
