#include<iostream>
#include<stdio.h>
#include<cmath>
#define MOD 1000000007
using namespace std;
void multiply(long long F[2][2],long long M[2][2]);
void power(long long F[2][2],long long n);
long long fibo(long long n)
{
 
	long long F[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power(F,n);
	return F[0][0];
}
void multiply(long long F[2][2],long long M[2][2])
{
 
	long long x = ((F[0][0]*M[0][0])%MOD + (F[0][1]*M[1][0])%MOD)%MOD;
	long long y = ((F[0][0]*M[0][1])%MOD + (F[0][1]*M[1][1])%MOD)%MOD;
	long long z = ((F[1][0]*M[0][0])%MOD + (F[1][1]*M[1][0])%MOD)%MOD;
    long long w =((F[1][0]*M[0][1])%MOD + (F[1][1]*M[1][1])%MOD)%MOD;
 
       	F[0][0] = x;
        F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
 
}
void power(long long F[2][2], long long n)
{
  	if( n == 0 || n == 1)
  		return;
	long long M[2][2] = {{1,1},{1,0}};
 
	power(F, n/2);
	multiply(F, F);
 
	if( n%2 != 0 )
	multiply(F, M);
}
int main()
{
	int t;
	long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==0)
		printf("%d\n",0);
		else if(n==1)
		printf("%d\n",2);
		else
		printf("%lld\n",fibo(n+2)%MOD);
 
	}
	return 0;
} 
