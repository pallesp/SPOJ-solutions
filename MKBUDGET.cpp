#include<set>
#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<vector>
#include<bitset>
#include<cstdio>
#include<cctype>
#include<cstdlib>
#include<climits>
#include<sstream>
#include<cstring>
#include<utility>
#include<iostream>
#include<algorithm>
//#include<$@!> // lAzY pRoGrAmMeR :)
using namespace std;
#define MAX 1000000002
#define INF 9999999
#define LL long long
#define pb push_back
#define vll vector<LL>
#define vi vector<int>
#define vs vector<string>
#define len(x) x.length()
#define pii pair<int,LL>
#define pi2 pair<pii,int>
#define ri(x) scanf("%d",&x)
#define rl(x) scanf("%lld",&x)
#define rep(i,a,n) for(int i=a;i<n;i++)
int main()
{
	int n,kx=1;
	ri(n);
	while(n)
	{
		LL arr[n+1],mx=0,ans=MAX;
		LL hire,sal,fire;
		rl(hire),rl(sal),rl(fire);
		rep(i,1,n+1){rl(arr[i]);mx=max(mx,arr[i]);}
		LL dp[25][32];
		rep(i,1,arr[1])dp[1][i]=MAX;
		rep(i,arr[1],mx+1)dp[1][i]=i*(hire+sal);
		rep(i,2,n+2)rep(j,1,mx+2)dp[i][j]=MAX;
		
		rep(i,2,n+1)
		{
			rep(j,1,mx+1)
			{
				dp[i][j]=MAX;
				if(arr[i]>j)continue;
				for(int k=1;k<=mx;k++)
				{
				dp[i][j]=min(dp[i][j],dp[i-1][k]+j*sal+ (j>k ? (j-k)*hire : (k-j)*fire));
				}
				
			}
		}
		rep(i,1,mx+1)ans=min(ans,dp[n][i]);
		cout<<"Case "<<kx++<<", cost = $"<<ans<<endl;
		ri(n);
	}
}
