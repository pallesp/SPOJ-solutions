//==============HeAdErS==============
#include<cmath>
#include<cctype>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<utility>
#include<iostream>
#include<algorithm>
//=============MaCrOs================
#define ll long long 
#define rl(x) scanf("%d",&x)
#define pii pair<int,int>
#define set(arr) memset(arr,0,sizeof arr)
#define FOR(a,N) for(ll i=a;i<N;i++)
#define FORE(a,N) FOR(a,N+1)
using namespace std;
int main()
{
	//code starts here
	int t;
	string s;
	cin>>s;
	while(s[0]!='0')
	{
		long long n=s.length();
		long long dp[n];
		set(dp);
		dp[0]=1;
		FOR(1,n)
		{
			int num=(s[i-1]-'0')*10+(s[i]-'0');
			if(s[i]-'0')
			dp[i]=dp[i-1];
			if(num>9 && num<=26)
			dp[i]+=dp[(i-2)<0?0:i-2];
		}
		cout<<dp[n-1]<<endl;
		cin>>s;
	}
} 
