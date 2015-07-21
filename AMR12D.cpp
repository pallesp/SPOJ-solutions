
#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<deque>
#include<climits>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
//#include<sai>   tHe lAzY PrOgRmMeR :)
#define rl(T) scanf("%lld",&T)
#define ri(T) scanf("%d",&T)
#define rs(T) scanf("%s",T)
#define loop(i,n) for(long long i=0;i<n;i++)
#define loopn(i,n) for(long long i=1;i<=n;i++)
#define ll long long
using namespace std;
int main()
{
	
	ll t;
	rl(t);
	while(t--)
	{
	string s;
	cin>>s;
	int f=0;
	ll n=s.length();
	for(ll i=0;i<n/2;i++)
	{
		if(s[i]!=s[n-i-1])
		{
		f=1;
		break;
		}
	}
	if(f==1)
	cout<<"NO\n";
	else
	cout<<"YES\n";
	}
}  
