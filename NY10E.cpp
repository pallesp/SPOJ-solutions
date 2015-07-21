#include<cstdio>
#include<iostream>
using namespace std;
long long dp[65][10];
void solve()
{
	for(int i=0;i<10;i++)
	dp[0][i]=1;
	for(int i=1;i<=65;i++)
	{
		for(int j=0;j<10;j++)
		{
			for(int k=0;k<=j;k++)
			{
				dp[i][j]+=dp[i-1][k];
			}
		}
	}
}
int main()
{
	solve();
	int t;
	cin>>t;
	while(t--)
	{
		
		int x,y;
		cin>>x>>y;
		cout<<x<<" "<<dp[y][9]<<endl;
	}
} 
