#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int m,x,y;
		double c,dp[n+1][n+1];
		cin>>m;
		memset(dp,0,sizeof dp);
		for(int i=0;i<m;i++)
		{
			cin>>x>>y>>c;
			dp[x][y]=c/100.0;
			dp[y][x]=c/100.0;
		}
		for(int k=1;k<=n;k++)
		   for(int i=1;i<=n;i++)		
	   	      for(int j=1;j<=n;j++)
			  dp[i][j]=max(dp[i][j],dp[i][k]*dp[k][j]);
		printf("%.6lf percent\n",dp[1][n]*100);
		cin>>n;
	}
}
