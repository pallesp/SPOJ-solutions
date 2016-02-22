//Dynamic Programming
#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define INF 1000000000
int n;
string s;
long long dp[202][202],one[202][202],zero[202][202];
long long solve(int i,int j)
{
	if(i==j)return dp[i][j];
	if(dp[i][j]!=-1)return dp[i][j];
	long long ans=-1;
	if(one[i][j]>zero[i][j])
		ans=(j-i+1);
	else
	{
		for(int k=i;k<j;k++)
		{
			ans=max(ans,solve(i,k)+solve(k+1,j));
		}
	}
	return dp[i][j]=ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		memset(dp,-1,sizeof dp);
		for(int i=0;i<n;i++)
		{
			if(s[i]=='0')dp[i][i]=0;else dp[i][i]=1;
			int o=0,z=0;
			for(int j=i;j<n;j++)
			{
				if(s[j]=='0')
					z++;
				else
					o++;

				one[i][j]=o;
				zero[i][j]=z;
			}
		}
		cout<<solve(0,n-1)<<endl;
	}
}
