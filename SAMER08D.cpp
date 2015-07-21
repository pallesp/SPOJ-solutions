#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>
using namespace std;
long dp[1002][1002],w[1002][1002];
int main()
{
	int k;
	long long l1,l2;
	scanf("%d",&k);
	while(k!=0)
	{
	char s1[1002],s2[1002];
	scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	/*memset(dp,0,sizeof(dp));
	memset(w,0,sizeof(w));*/
	for(int i=1;i<=l1;i++)
		for(int j=1;j<=l2;j++)
		{
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			if(s1[i-1]==s2[j-1])
			w[i][j]=w[i-1][j-1]+1;	
			else
			w[i][j]=0;
			if(w[i][j]>=k)
			{
				for(int z=k;z<=w[i][j];++z)
				{
						dp[i][j]=max(dp[i][j],dp[i-z][j-z]+z);
						
				}	
			}
		}
	cout<<dp[l1][l2]<<endl;
	cin>>k;
	}
} 
