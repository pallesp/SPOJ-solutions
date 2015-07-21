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
	ll t,n,res;
	rl(t);
	while(t--)
	{
		char s[1000000],ans[1000000];
		res=0;
		scanf("%s",s);
		n=strlen(s);
		strcpy(ans,s);
		for(ll i=0;i<n;i++)
		s[n+i]=s[i];
		s[2*n]=0;
		for(ll i=1;i<n;i++)
		{
			if(strcmp(ans,s+i)>0)
			{
				strcpy(ans,s+i);
				ans[n]=0;
				res=i;
			}
		}
		cout<<res+1<<endl;
	}	
} 
