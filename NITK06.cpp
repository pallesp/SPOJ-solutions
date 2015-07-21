#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n+10];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n==1)
		{
			printf("NO\n");
			continue;
		}
		for(long long i=n-2;i>=0;i--)
		{
			a[i]=a[i]-a[i+1];
		//	cout<<a[i]<<endl;
		}
		if(!a[0])
		printf("YES\n");
		else
		printf("NO\n");
	}
}  
