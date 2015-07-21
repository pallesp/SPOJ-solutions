#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int sum,n;
	cin>>sum>>n;
	bool dp[sum+1];
	int c[n];
	for(int i=0;i<n;i++)
	cin>>c[i];
	memset(dp,false,sizeof dp);
	dp[0]=true;
	for(int i=1;i<n;i++)
	c[i]=c[i]+c[i-1];
	for(int i=0;i<n;i++)
	{
		for(int j=c[i];j<=sum;j++)
		{
			dp[j]|=dp[j-c[i]];
		}
	}
	if(dp[sum])
	cout<<"YES\n";
	else
	cout<<"NO\n";
	
} 
