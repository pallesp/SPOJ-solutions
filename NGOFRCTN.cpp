#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<list>
#define ll long long
#define ri(T) scanf("%d",&T)
#define rl(T) scanf("%lld",&T)
#define MOD 1000000007
using namespace std;
vector<ll> find(ll n)
{
	vector<ll>res;
	res.resize(2);
	if(n==1)
	{
		res[0]=1,res[1]=1;
		return res;
	}
	res=find(n/2);
	if(!(n%2))
	res[1]+=res[0];
	else
	res[0]+=res[1];
 
	return res;
}
int main()
{
	vector<ll>res;
	res.resize(2);
	ll n;
	rl(n);
	while(n)
	{
		res=find(n);
		printf("%lld/%lld\n",res[0],res[1]);
		rl(n);
	}
	return 0;
} 
