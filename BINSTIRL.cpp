#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define rl(x) scanf("%lld",&x)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<(((a-b)&(b-1)/2)==0)<<endl;
	}
}
