#include<iostream>
#include<map>
using namespace std;
map<int,long long int>dp;
long long coins(long long int t)
{
	if(t==0)
	return 0;
	if(dp[t]!=0)
	return dp[t];
	long long x=coins(t/2)+coins(t/3)+coins(t/4);
	if(x>t)
	dp[t]=x;
	else
	dp[t]=t;
 
	return dp[t];
}
int main()
{
	long long int t;
	while(cin>>t)	
	{
		cout<<coins(t);cout<<endl;
	}
}
 
