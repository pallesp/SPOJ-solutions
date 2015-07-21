#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define INF 99999999
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long e,f,n,x=0;
		long long dp[100001],val[100000],wt[100000];
		scanf("%lld%lld%lld",&e,&f,&n);
		for(long long i=0;i<n;i++)
		scanf("%lld%lld",&val[i],&wt[i]);
		//memset(dp,,sizeof dp);
		for(long long i=1;i<=f-e;i++)
		{
			x=INF;
			for(long long j=0;j<n;j++)
			{
				if(i>=wt[j])
				x=min((val[j]+dp[i-wt[j]]),x);
			}
			dp[i]=x;
		}
		if(dp[f-e]!=INF)
		printf("The minimum amount of money in the piggy-bank is %lld.\n",dp[f-e]);
		else
		printf("This is impossible.\n");
	}
} 
