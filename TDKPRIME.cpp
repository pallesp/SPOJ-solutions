#include <cstdio>
#include <cmath>
#include <algorithm>
#include <bitset>
#include<iostream>
#define MAX 100000005
using namespace std;
bitset <MAX/2 + 1> prime;
int primes[5761460], num_primes;
 
void EratostheneSieve()	
{
	int x=MAX/2,y=(sqrt(MAX)-1)/2,i,j;
	long long ans=0;
 	for (i=1;i<=y;i++) 
	{
	      	if(prime[i]==0)
	        for(j=(i*(i+1))<<1;j<=x;j+=(i<<1)+1)
	            prime[j]=1;
	}
	prime[0]=1;
	primes[0]=2;
	for(i= 3,j=1;i<MAX;i+=2)
	if(!prime[i>>1])
	primes[j++]=i;
	num_primes=j;
}
int main()
{
	EratostheneSieve();
	long long t;
	cin>>t;
	while(t--)
	{
		long long l;
		cin>>l;
		cout<<primes[l-1]<<endl;
	}
} 
