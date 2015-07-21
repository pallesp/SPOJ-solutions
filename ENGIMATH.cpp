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
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,res=0,a1,b1;
		ri(a),ri(b);
		res=__gcd(a,b);
		//mx1=max(a,b);
		a1=a/res;
		b1=b/res;
		if(a>b)
		cout<<min(a1,b1)<<" "<<max(a1,b1)<<endl;
		else
		cout<<max(a1,b1)<<" "<<min(a1,b1)<<endl;
	}
} 
