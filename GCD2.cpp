#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#define read(n) scanf("%lld",&n);
using namespace std;
long long a;
char b[100000];
long long rem(long long a,string b)
{
	long long  p=0;
	for(int i=0;b[i]!='\0';i++)
	{
		p=((b[i]-'0')+p*10)%a;
	}
	return p;
}
int main()
{
	long long t;
	read(t);
	while(t--)
	{
		string s;
		scanf("%lld%s",&a,b);
		if(a==0)
		{
		printf("%s\n",b);
		}
		else
		{
		printf("%lld\n",__gcd(a,rem(a,b)));
		}
	}
}
