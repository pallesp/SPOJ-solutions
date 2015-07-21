#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		long len=s.length();
		long dp[len+1];
		dp[0]=1;
		int prev[300];
		memset(prev,0,sizeof prev);
		for(long i=1;s[i-1];i++)
		{
			dp[i]=(dp[i-1]*2);
			if(prev[s[i-1]]>0)
			{
			dp[i]=dp[i]-dp[prev[s[i-1]]-1];
			}
			prev[s[i-1]]=i;
			if(dp[i]<0)
			dp[i]+=1000000007;
			else		
			dp[i]%=1000000007;
			
		}
		cout<<dp[len]<<endl;
	}
} 
