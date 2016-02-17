#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
#define MAX 502
long long dp[MAX][MAX];
long long row[MAX][MAX],col[MAX][MAX];
long long r,c;
using namespace std;
long long solve(int r,int c)
{
	if(r==0 or c==0)
		return 0;
	if(dp[r][c]!=-1)return dp[r][c];
	return dp[r][c]=max(solve(r-1,c)+row[r][c],solve(r,c-1)+col[r][c]);
}
int main()
{
   cin>>r>>c;
   while(r|c)
   {
   		memset(row,0,sizeof row);
   		memset(col,0,sizeof col);
   		memset(dp,-1,sizeof dp);
   		for(int i=1;i<=r;i++)for(int j=1;j<=c;j++)cin>>row[i][j];
   		for(int i=1;i<=r;i++)for(int j=1;j<=c;j++)cin>>col[i][j];
   		for(int i=1;i<=r;i++)for(int j=2;j<=c;j++)row[i][j]+=row[i][j-1];
   		for(int i=1;i<=c;i++)for(int j=2;j<=r;j++)col[j][i]+=col[j-1][i];
   		cout<<solve(r,c)<<endl;
   		cin>>r>>c;
   }
}
