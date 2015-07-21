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
using namespace std;
ull mulmod(ull a,ull b,ull c)
{
	ull x=0,y=a%c;
	while(b>0)
	{
		if(b&1)
		x=(x+y)%c;
		b>>=1;
		y=(y<<1)%c;
	}
	return x;
}
ull powermod(ull a,ull b,ull c)
{
	ll x=1,y=a;
	while(b>0)
	{
		if(b&1) x=mulmod(x,y,c);
		b>>=1;
		y=mulmod(y,y,c);
	}
	return x;
}
bool rabinmiller(ull p,int it)
{
	if(p<2)
	return false;	
	if(p!=2  && p%2==0)
	return false;
	ll s=p-1;
	while(s%2==0)
	s/=2;
	while(it--)
	{	
		ull a=rand()%(p-1)+1;
		ull temp=s;
		ull mod=powermod(a,temp,p);
		if(mod==1 || mod==-1)
		continue;
		while(temp!=p-1 && mod!=p-1){
			mod = mulmod(mod,mod,p);
			temp <<= 1;
		}
		
		if(mod!=p-1) return false;
	}
	return true;
	
}
int main()
{
	ll n;
	rl(n);
	while(n--)
	{
		ull p;
		rl(p);
		rabinmiller(p,18)?printf("YES\n"):printf("NO\n");
	}
	return 0;
} 
