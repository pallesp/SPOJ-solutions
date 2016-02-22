//Too slow But got AC ;)
#include<cstdio>
#include<cstring>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
#define INF 1000000000
vector<long long>num;
vector<char>op;
string s;
int op_s,num_s;
long long dp1[150][150],dp2[150][150];
long long solve1(int i,int j)
{
	if(i==j)return dp1[i][j];
	if(dp1[i][j]!=0)return dp1[i][j];
	long long ans=-INF;
	for(int k=i;k<j;k++)
	{
		if(op[k]=='+')
			ans=max(ans,solve1(i,k)+solve1(k+1,j));
		else
			ans=max(ans,solve1(i,k)*solve1(k+1,j));
	}
	return dp1[i][j]=ans;
}
long long solve2(int i,int j)
{
	if(i==j)return dp2[i][j];
	if(dp2[i][j]!=0)return dp2[i][j];
	long long ans=INF;
	for(int k=i;k<j;k++)
	{
		if(op[k]=='+')
			ans=min(ans,solve2(i,k)+solve2(k+1,j));
		else
			ans=min(ans,solve2(i,k)*solve2(k+1,j));
	}
	return dp2[i][j]=ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		memset(dp1,0,sizeof dp1);
		memset(dp2,0,sizeof dp2);
		for(int i=0;i<s.length();i++)
			if(s[i]=='*' or s[i]=='+')
				op.push_back(s[i]);
			else
				num.push_back(s[i]-'0');
		for(int i=0;i<num.size();i++)dp1[i][i]=dp2[i][i]=num[i];
		cout<<solve1(0,num.size()-1)<<" "<<solve2(0,num.size()-1)<<endl;
		op.clear();
		num.clear();
	}
}
