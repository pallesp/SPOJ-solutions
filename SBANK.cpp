#include<iostream>
#include<map>
#include<cstring>
#include<map>
#include<cstdio>
#define r(n) scanf("%lld",&n);
using namespace std;
int main()
{
	long long int t,n;
	char line[64];
	r(t);
	while(t--)
	{
		map<string,int>m;
		map<string,int>::iterator it;
		m.clear();
		for(scanf("%lld\n",&n);n;n--)
		{
			fgets(line,64,stdin);
			m[line]++;
			//cout<<line<<endl;
		}
		for(it=m.begin();it!=m.end();it++)
		{
			 printf("%s %d\n", it->first.c_str(), it->second);
		}
	}
} 
