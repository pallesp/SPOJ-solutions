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
void ri(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
int main()
{
	int a,b,c,d,a1,b1,c1,d1;
	while(1)
	{
		cin>>a>>b>>c>>d>>a1>>b1>>c1>>d1;
		if(a==-1)
		break;
		else
		{
			int x1=(int)ceil((float)a/(float)a1);
			int x2=(int)ceil((float)b/(float)b1);
			int x3=(int)ceil((float)c/(float)c1);
			int x4=(int)ceil((float)d/(float)d1);
			int mx=max(x1,max(x2,max(x3,x4)));//cout<<mx<<endl;
			cout<<mx*a1-a<<" "<<mx*b1-b<<" "<<mx*c1-c<<" "<<mx*d1-d<<endl;
		}
	}
	
} 
