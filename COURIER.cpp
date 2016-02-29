//Algorithm : Travelling Sales Man, All pair shortest path(Floyd Warshall ),dp+bitmasking
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 1<<28
int msk=0,n,m,home;
long long src[20],dest[20];
long long dist[101][101],dp[1<<12][101];
void floyd_warshall(int n)
{
	for(int k=0;k<n;k++)
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
}
void clear()
{
	for(int i=0;i<101;i++)for(int j=0;j<101;j++)dist[i][j]=INF;
	for(int i=0;i<101;i++)dist[i][i]=0;
	memset(dp,-1,sizeof dp);
	memset(src,0,sizeof src);
	memset(dest,0,sizeof dest);
}
long long solve(int mask,int prev)
{
	if(dp[mask][prev]!=-1) return dp[mask][prev];
	long long ans=INF,cost,f=0;
	for(int i=0;i<msk;i++)
	{
		if((mask&(1<<i))==0)
		{
			f=1;
			cost=dist[prev][src[i]]+dist[src[i]][dest[i]]+solve(mask|(1<<i),dest[i]);
			if(cost<ans)
				ans=cost;
		}
	}
	if(f==0)
	return dp[mask][prev]=dist[prev][home-1];
	return dp[mask][prev]=ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,c;
		clear();
		cin>>n>>m>>home;				
		for(int i=0;i<m;i++)
		{
			cin>>x>>y>>c;
			dist[x-1][y-1]=dist[y-1][x-1]=c;
		}
		floyd_warshall(n);
		int q;msk=0;int k=0;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			cin>>x>>y>>c;
			msk+=c;
			while(c--)
			{
				src[k]=x-1,dest[k]=y-1;
				k++;
			}
 
		}
		msk=k;
		cout<<solve(0,home-1)<<endl;
 
	}
} 
