#include<cstdio>
#include<iostream>
using namespace std;
char f(long long n,long long k)
{
	if(n==0)
	return 'M';
	if(k%2==1)
	return f(n-1,k/2 +1)=='M'?'M':'F';
	else
	return f(n-1,k/2)=='M'?'F':'M'; 
}
int main()
{
	long long n,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		char ch=f(n,k);
		if(ch=='M')
		cout<<"Male\n";
		else
		cout<<"Female\n";
	}
}
