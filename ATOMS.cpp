#include<stdio.h>
int main()
{
	int  t;
	scanf("%d",&t);
	while(t--)
	{
		long double n,k,sum;int c=0;
		scanf("%Lf%Lf%Lf",&n,&k,&sum);
		while(n<=sum)
		{
		n=n*k;
		if(n<=sum)
		 c++;
		else
		break;
		}
		printf("%d\n",c);
	}
		
		
} 
