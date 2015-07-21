#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<stack>
#include<vector>
#include<cctype>
#include<vector>
#include<queue>
#include<utility>
#include<sstream>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
#define len(x) x.length()
#define xx first
#define yy second
#define pii pair<int,int>
#define reset(x) memset(x,0,sizeof x)
#define gc getchar_unlocked
#define PII pair<int,int>
#define PI2 pair<PII,int>
using namespace std;
void ri(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
	int r,t;
	ri(t);
	while(t--)
	{
		int r,c;
		ri(r),ri(c);
		int dp[r+2][c+2];
		for(int i=1;i<=r;i++)
		   for(int j=1;j<=c;j++)
			ri(dp[i][j]);
		for(int i=r-1;i>=1;i--)
		{
			for(int j=1;j<=c;j++)
			{
				if(j==1)
				dp[i][j]+=(max(dp[i+1][j],dp[i+1][j+1]));
				else if(j==c)
				dp[i][j]+=max(dp[i+1][j],dp[i+1][j-1]);
				else
				dp[i][j]+=max(dp[i+1][j],max(dp[i+1][j-1],dp[i+1][j+1]));
 
			}
		}
		int ans=0;
		for(int i=1;i<=c;i++)
		ans=max(ans,dp[1][i]);
		cout<<ans<<endl;
	}
	
} 
