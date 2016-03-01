//Dynamic Programming
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	long long coins[35];
	for(int i=1;i<=33;i++)coins[i]=i*i;
	long long dp[1005];
	for(int i=1;i<=1000;i++)dp[i]=1000000;
	dp[0]=0;
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=33;j++)
		{
			if(i>=coins[j])
				dp[i]=min(dp[i],1+dp[i-coins[j]]);
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
}
