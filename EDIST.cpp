#include<bits/stdc++.h>
using namespace std;
int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
		return b;
}
static int dp[2010][2010];
int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		int temp1,temp2,edit;
		string s1,s2;
		cin>>s1>>s2;
		int l1=s1.length();
		int l2=s2.length();
		dp[0][0]=0;
		for(int i=0;i<=l1;i++)dp[i][0]=i;
		for(int i=0;i<=l2;i++)dp[0][i]=i;
		for(int i=1;i<=l1;i++)
		{
			for(int j=1;j<=l2;j++)
			{
				edit=(s1[i-1]==s2[j-1])?0:1;
				temp1=min(dp[i-1][j]+1,dp[i][j-1]+1);
				temp2=dp[i-1][j-1]+edit;
				dp[i][j]=min(temp1,temp2);
			}
		}
		/*for(int i=0;i<=l1;i++)
		{
			for(int j=0;j<=l2;j++)
			{
			cout<<dp[i][j]<<"  ";
			}
			cout<<endl;
		}*/
		cout<<dp[l1][l2]<<endl;
		
	}
}
