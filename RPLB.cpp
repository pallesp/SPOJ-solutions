#include<cstdio>
#define ll long long
#define print(x) printf("%lld",x)
#define read(x) scanf("%lld",&x)
#define max(a,b) a>b?a:b
int main()
{
	ll t;
	read(t);int cas=1;
	while(cas<=t)
	{
		ll n,sum;	
		read(n);read(sum);
		ll a[n];
		for(int i=0;i<n;i++)
		read(a[i]);
		ll dp[n+1][sum+1];
		for(int i=0;i<=n;i++)
		   for(int j=0;j<=sum;j++)
			dp[i][j]=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=sum;j++)
			{
				if(i==1)
				{
					if(a[i-1]<=j)
					dp[i][j]=a[i-1];
					else
					dp[i][j]=0;
				}
				else
				{
					if(a[i-1]<=j)
					dp[i][j]=max(dp[i-2][j-a[i-1]]+a[i-1],dp[i-1][j]);
					else
					dp[i][j]=dp[i-1][j];
				}
			}
		}
		printf("Scenario #%d: %lld",cas,dp[n][sum]);
		printf("\n");
		cas++;
	}
