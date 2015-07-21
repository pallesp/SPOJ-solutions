#include<set>
#include<map>
#include<stack>
#include<queue>
//#include<cmath>
#include<vector>
#include<cstdio>
#include<deque>
#include<bitset>
#include<climits>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
using namespace std;
//#include<sai>   tHe lAzY PrOgRmMeR :)
#define rl(T) scanf("%lld",&T)
#define ri(T) scanf("%d",&T)
#define rs(T) scanf("%s",T)
#define rc(T) scanf("%c",&T)
#define loop(i,a,n) for(long long i=a;i<n;i++)
#define loopn(i,n) for(long long i=1;i<=n;i++)
#define ll long long
#define ull unsigned long long
#define MOD 10000007 
using namespace std;
 
ull powermod(ull a,ull b)
{
	ll x=1,y=a;
	while(b>0)
	{
		if(b&1) x=(x*y)%MOD;
		b>>=1;
		y=(y*y)%MOD;
	}
	return x;
}
int main()
{
	ull n,k,ans;
	rl(n),rl(k);
	while(1)
	{
		if(n==0 && k==0)
		break;
		else
		{		
		ans=(2*powermod(n-1,k)%MOD + powermod(n,k)%MOD +powermod(n,n)%MOD +2*powermod(n-1,n-1)%MOD)%MOD;
		cout<<ans<<endl;
		}
		rl(n),rl(k);
	}
} 
