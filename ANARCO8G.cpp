#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<cmath>
#include<vector>
#include<cstdio>
#include<cctype>
#include<deque>
#include<bitset>
#include<utility>
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
#define loopn(i,a,n) for(long long i=1;i<=n;i++)
#define ll long long
using namespace std;
int main()
{
	long long n,c=1;
	rl(n);
	while(n)
	{
		long long a[n+2][n+2],sum=0,res=0;
		memset(a,0,sizeof a);
		for(ll i=0;i<n;i++)
		    for(ll j=0;j<n;j++)
			rl(a[i][j]),res+=a[i][j];
		for(ll i=0;i<n;i++)
		{
			long long in=0,out=0;
			for(ll j=0;j<n;j++)
			{
				in+=a[i][j];
				out+=a[j][i];
			}
			sum+=abs(out-in);
			//cout<<sum<<endl;
		}
		printf("%lld. %lld %lld\n",c++,res,sum/2);
		//cout<<(out-in)<<endl;
		rl(n);
	}
