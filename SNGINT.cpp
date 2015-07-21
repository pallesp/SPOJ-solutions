#include<cstdio>
#include<cstring>
using namespace std;
int res[110];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		if(n==0)
		printf("10\n");
		else if(n<10)
		printf("%lld\n",n);
		else
		{
			memset(res,0,sizeof(res));
			int c=0;
			
			for(int i=9;i>=2;i--)
			{
				if(n%i==0)
				{
					while(n%i==0)
					{
						res[c++]=i;n/=i;
					}
				}
			}
			//printf("came here\n");
			if(n>10)
			printf("-1");
			else
			{
				for(int i=c-1;i>=0;i--)
				printf("%d",res[i]);
			}
			printf("\n");
		}
		
	}
} 
