#include<set>
#include<map>
#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
double dp[571][3421]={0.0};
void solve()
{
	dp[0][0]=1;
	for(int i=1;i<=6;i++)dp[1][i]=1/6.0;
	for(int i=2;i<570;i++)
	{
		for(int j=1;j<=(6*i);j++)
		{
			for(int k=1;k<=6;k++)
			if(j>=k)
			dp[i][j]+=dp[i-1][j-k];
			
			dp[i][j]/=6.0;
		}
	}
}
int main()
{
	long long t;
	cin>>t;
	solve();
	while(t--)
	{
		long long n,m,res;
		cin>>n>>m;
		if(n<570 and m<3420)			//took this line from https://github.com/ngoyal2707/SPOJ-solutions/blob/master/AE2A.cpp
		{
			res=dp[n][m]*100;
			cout<<res<<endl;
		}
		else
			cout<<"0"<<endl;
	}
}
