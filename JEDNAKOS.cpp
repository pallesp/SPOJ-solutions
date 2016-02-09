#include<set>
#include<map>
#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define INF 1000000
int dp[5020][5020];
int val=0;
string s="";
int solve(int amount,int pos)
{
	if(amount==0 and pos==s.length())return 0;
	if(pos==s.length())return INF;
	if(dp[pos][amount]!=-1)return dp[pos][amount];
	int res=0;
	int ans=INF;
	for(int i=pos;i<s.length();i++)
	{
		res=res*10+(s[i]-'0');
		if(res>amount)break;
		ans=min(ans,1+solve(amount-res,i+1));
	}
	return dp[pos][amount]=ans;
}
int main()
{
	string str;
	memset(dp,-1,sizeof dp);
	cin>>str;
	int p=str.find('=');
	int cnt=0;
	for(int i=0;i<p;i++)
	{
		if(str[i]!='0')
		{
			s+=str[i];
			cnt=0;
		}
		else if(str[i]=='0' and cnt<=3)
		{
			s+=str[i];
			cnt++;
		}
	}
	for(int i=p+1;i<str.length();i++)
	{
		val=val*10+(str[i]-'0');
	}
	cout<<solve(val,0)-1<<endl;
}
