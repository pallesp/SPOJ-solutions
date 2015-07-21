#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[2002][2002];
int a[2002];
int cost(int strt,int end,int yr)
{
	if(strt>end)
	return 0;
	if(dp[strt][end]!=-1)
	return dp[strt][end];
	else
	return dp[strt][end]=max(cost(strt+1,end,yr+1)+(yr*a[strt]),cost(strt,end-1,yr+1)+(yr*a[end]));
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	memset(dp,-1,sizeof dp);
	cout<<cost(0,n-1,1)<<endl;
} 
