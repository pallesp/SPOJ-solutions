#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long t,p,q;
	cin>>t;
	while(t--)
	{
		cin>>p;
		long long a[p+10],b[p+10],sum=0;
		for(long long i=0;i<p;i++)
		cin>>a[i];
		for(long long i=0;i<p;i++)
		cin>>b[i];
		sort(a,a+p);
		sort(b,b+p);
		for(long long i=0;i<p;i++)
		sum+=a[i]*b[i];	
		cout<<sum<<endl;
	}
} 
