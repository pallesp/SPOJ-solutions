#include <cstdio>
#include <algorithm>
#include <bitset>
#include<cmath>
#include<cstring>
#include<iostream>
#define MAX 500020
#define MOD 10000
#define pi(x) printf("%d",x)
#define pl(x) printf("%lld",x)
#define pn    printf("\n");
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define max(a,b) a>b?a:b
#define min(a,b) a>b?b:a
using namespace std;
int main()
{
	int t,ca=1;
	si(t);
	while(t--)
	{
		long long n;
		char ans[5];
		sl(n);
		long long c=0,temp;
		long long sq=sqrt(n);
		//double nn=n;
		if(sq*sq==n)
		strcpy(ans,"Yes");
		else
		strcpy(ans,"No");
		printf("Case %d: %s\n",ca,ans);ca++;
	}
} 
