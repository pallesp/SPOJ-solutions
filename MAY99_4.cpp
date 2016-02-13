#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
#define min(a,b) a>b?b:a
#define INF 1000000000
#define MOD 10000007
#define rep(i,a,n) for(int i=a;i<n;i++)
long long dp[105][105];
using namespace std;
int main()
{
	for(int i=0;i<=105;i++)
		for(int j=0;j<=i;j++)
			if(i==0 or j==0)
			dp[i][j]=1;
			else
			dp[i][j]=(dp[i-1][j-1]%MOD + dp[i-1][j]%MOD)%MOD;
		int m,n;
		cin>>m>>n;
		if(n>m)cout<<"-1\n";
		else if(m==n)cout<<"1"<<endl;
		else
		cout<<(dp[m-1][n-1])%MOD<<endl;
} 
