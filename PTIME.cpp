#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int chk[32000];		//sqrt(10^9)=31622
int primes[10009];
void sieve()
{
	memset(chk,1,sizeof chk);
	int cnt=0;
	chk[0]=chk[1]=0;
	for(int i=2;i<120;i++)
	{
		if(chk[i])
		{
		for(int j=i*i;j<10009;j+=i)
		chk[j]=0;
		}
	}
	for(int i=2;i<10009;i++)
	if(chk[i])
	{
		primes[cnt++]=i;
		//cout<<i<<endl;
	}
	
}
int main()
{
	sieve();
	int a,b,n,res=0;
	cin>>n;
	int k=0;
	for(int i=primes[k];primes[k]<n;i=primes[++k])
	{
		int count=0,f;
		int temp=n;
		int j=f=primes[k];
		while(j<temp)
		{
			//cout<<temp<<" "<<j<<endl;
			count+=(temp/j);
			j*=f;
		}
		if(count>0)
		cout<<primes[k]<<"^"<<count;
		if(primes[k+1]<n)
		cout<<" * ";
	}
	cout<<endl;
}
