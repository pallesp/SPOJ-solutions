#include<map>
#include<set>
#include<cstdio>
#include<cmath>
#include<stack>
#include<vector>
#include<cctype>
#include<vector>
#include<queue>
#include<utility>
#include<sstream>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
#define len(x) x.length()
#define xx first
#define yy second
#define pii pair<int,int>
#define reset(x) memset(x,0,sizeof x)
#define gc getchar_unlocked
#define PII pair<int,int>
#define PI2 pair<PII,int>
using namespace std;
void ri(long long &x)
{
    register long long c = gc();
    x = 0;
    long long neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
	long long a[500110];
	map<long long,long long >vis;
	for(int i=1;i<=500002;i++)
	{
		if(i>0)
		{
			a[i]=a[i-1]-i;
			if(a[i]>0 and !vis[a[i]])
			{
				vis[a[i]]=1;
			}
			else
			{
			a[i]=a[i-1]+i;
			vis[a[i]]=1;
			}
		}
	}
	long long n;
	cin>>n;
	while(n!=-1)
	{
		cout<<a[n]<<endl;
		cin>>n;
	}
	
}
