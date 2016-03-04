#include <map>
#include <set>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <utility>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1<<16
#define ff first
#define ss second
#define pii pair<int,int>
#define pi2 pair<pii,int>
int r,c;
string s[101];
int dp[101][101][101];
int cost(int x,int y,int a,int b)
{
	int ans=0;
	if((x==a) and (y==b))
	{
		if(s[x][y]=='*')
			return 1;
		return 0;
	}
	if(s[x][y]=='*')ans++;
	if(s[a][b]=='*')ans++;
	return ans;

}
int solve(int x1,int y1,int x2)
{
	int y2=(x1+y1)-x2;
	if(x1>=r or y1>=c or x2>=r or y2>=c)	return -INF;
	if(x1==r-1 and y1==c-1 and (x2==r-1 and y2==c-1))	return 0;
	if(dp[x1][y1][x2]!=-1)return dp[x1][y1][x2];
	int ans=0;
	if(s[x1][y1+1]!='#' and s[x2+1][y2]!='#')
		ans=max(ans,cost(x1,y1+1,x2+1,y2)+solve(x1,y1+1,x2+1));
	if(s[x1][y1+1]!='#' and s[x2][y2+1]!='#')
		ans=max(ans,cost(x1,y1+1,x2,y2+1)+solve(x1,y1+1,x2));
	if(s[x1+1][y1]!='#' and s[x2+1][y2]!='#')
		ans=max(ans,cost(x1+1,y1,x2+1,y2)+solve(x1+1,y1,x2+1));
	if(s[x1+1][y1]!='#' and s[x2][y2+1]!='#')
		ans=max(ans,cost(x1+1,y1,x2,y2+1)+solve(x1+1,y1,x2));
	return dp[x1][y1][x2]=ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>c>>r;
		for(int i=0;i<r;i++)
		cin>>s[i];
		int ans=0;
		memset(dp,-1,sizeof dp);
		if(s[0][0]=='#' or s[r-1][c-1]=='#')
		{
			cout<<ans<<endl;continue;
		}
		if(s[0][0]=='*')ans++,s[0][0]='.';
		if(s[r-1][c-1]=='*')ans++,s[r-1][c-1]='.';
		ans+=solve(0,0,0);
		cout<<ans<<endl;
		for(int i=0;i<101;i++)s[i].clear();
	}

}
