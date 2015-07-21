#include<cstdio>
#include<cstring>
#include<iostream>
#include<climits>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long
#define INF INT_MAX
#define pii pair<int,int>
#define pi2 pair<pii,int>
#define rl(x) scanf("%lld",&x)
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};
string s[190];
bool vis[190][190];
int res[190][190];
int main()
{
	ll t;
	rl(t);
	while(t--)
	{
		ll m,n;
		rl(m),rl(n);
		for(int i=0;i<m;i++)
		cin>>s[i];
		queue<pi2>Q;
		memset(vis,false,sizeof vis);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(s[i][j]=='0')
				res[i][j]=INT_MAX;
				else
				{
				res[i][j]=0;
				Q.push(pi2(pii(i,j),0));
				vis[i][j]=true;
				}
			}
		}
		while(!Q.empty())
		{
			int u=Q.front().first.first;
			int v=Q.front().first.second;
			int dis=Q.front().second;
			Q.pop();
			for(int i=0;i<4;i++)
			{
				int uu=u+dx[i];
				int vv=v+dy[i];
				if(uu>=0 && uu<m && vv>=0 && vv<n && !vis[uu][vv])
				{
					Q.push(pi2(pii(uu,vv),dis+1));
					res[uu][vv]=dis+1;
					vis[uu][vv]=true;
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
			cout<<res[i][j]<<" ";
			}
			cout<<endl;
		}	
		
	}
		
}
