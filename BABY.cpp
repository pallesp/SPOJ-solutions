//Algorithm : (DP+bitmasks) ;)
#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<sstream>
#include<algorithm>
#include<limits>
#define MAX 10000000
#define min(a,b) a>b?b:a
using namespace std;
int a[20],b[20],n;
int dp[1<<16][16];
int solve(int mask,int idx)
{
	if(idx==n)return 0;
	if(dp[mask][idx]!=-1)return dp[mask][idx];
	if(mask==(1<<n)-1)return 1;
	int mn=MAX;
	for(int i=0;i<n;i++)
	{
		if((mask&(1<<i))==0)
		{
			mn=min(mn,abs(i-idx)+abs(b[idx]-a[i])+solve(mask|(1<<i),idx+1));
		}
	}
	return dp[mask][idx]=mn;
}
int main()
{
	scanf("%d",&n);
	while(n)
	{
		memset(dp,-1,sizeof dp);
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=0;i<n;i++)cin>>b[i];
		cout<<solve(0,0)<<endl;
		scanf("%d",&n);
		
	}	
}
