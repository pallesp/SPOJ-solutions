#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define rl(x) scanf("%lld",&x)
int main()
{
	long long a,b;
	cin>>a>>b;
	while((a+b)!=0)
	{
		if(a%b==0)
		{
			cout<<a/b<<endl;
		}
		else if(b%a==0)
		{
			cout<<(b/a)<<endl;
		}
		else
			cout<<a*b<<endl;
		cin>>a>>b;
	}
}
