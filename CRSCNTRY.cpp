#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#define r(N) scanf("%lld",&N);
using namespace std;
long long dp[1002][1002];
vector<long long>agen;
vector<long long>tom;		
long long lcs()
{
	for(int i=0;i<=agen.size();i++)
	{
		for(int j=0;j<=tom.size();j++)
		{
			if(i==0||j==0)
			dp[i][j]=0;
			else if(agen[i-1]==tom[j-1])
			dp[i][j]=dp[i-1][j-1]+1;
			else
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[agen.size()][tom.size()];
}
int main()
{
	long long te;
	r(te);
	while(te--)
	{
		long long m=0;
		agen.clear();
		tom.clear();
		while(1)
		{
			long long t;
			r(t);
			if(t==0)break;
			agen.push_back(t);
			
		}
		while(1)
		{	
			tom.clear();
			long long t;
			r(t);
			if(t==0)break;
			tom.push_back(t);
			while(1)
			{
				r(t);
				if(t==0)break;
				tom.push_back(t);
			}
			m=max(m,lcs());
			
		}
		cout<<m<<endl;	
	}
}
