#include<iostream>
using namespace std;
int main()
{
	long long t,n,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		temp=n;
		while(temp%2==0)
		{
			temp=temp/2;
		}
		if(temp%3==0)
		{
		temp=temp/3;
		}
		if(temp%5==0)
		{
		temp=temp/5;
		}
		if(temp%17==0)
		{
		temp=temp/17;
		}
		if(temp%257==0)
		{
		temp=temp/257;
		}
		if(temp%65537==0)
		{
		temp=temp/65537;
		}
		if(temp==1)
		{
		cout<<"Yes\n";
		}
		else
		{
		cout<<"No\n";
		}
	}
}
 
