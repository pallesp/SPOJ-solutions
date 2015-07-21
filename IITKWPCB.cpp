#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{	
		long long n;
		cin>>n;
		if(n==1)
		cout<<"0"<<endl;
		else
		{
			long long i;
			for(i=n/2;i>=1;i--)
			{
			if(__gcd(n,i)==1)
			break;
			}
			cout<<i<<endl;
		}
	}
		
} 
