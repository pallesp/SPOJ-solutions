#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
using namespace std;
int chk[32000];		//sqrt(10^9)=31622
int primes[10000];
void sieve()
{
	memset(chk,1,sizeof chk);
	int cnt=1;
	chk[0]=chk[1]=0;
	for(int i=3;i<200;i++)
	{
		if(chk[i])
		for(int j=i*i;j<32000;j+=i)
		chk[j]=0;
	}
	primes[0]=2;
	for(int i=3;i<32000;i++)
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
	cin>>a>>b>>n;
	for(int i=a;i<=b;i++)
	{
		int st=0;
		int temp=i;
		int total=1;
		for(int k=primes[st];k*k<=temp;k=primes[++st])
		{
			int count=0;
			while(temp%k==0)
			{
				temp/=k;
				count++;
			}
			total*=(count+1);
			
		}	
		if(temp!=1)
		total*=2;
		if(total==n)
		res++;
		//cout<<"ok\n";cout<<res<<endl;
		
	}
	cout<<res<<endl;
}
