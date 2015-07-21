#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n];
	long long gcd=0;
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
	cin>>a[i];
	gcd=__gcd(a[i]-a[i-1],gcd);
	}
	long long ans=0;
	for(int i=1;i<n;i++)
	{
	ans+=((a[i]-a[i-1])/gcd)-1;
	}
	cout<<ans<<endl;
	
} 
