#include<iostream>
using namespace std;
int main()
{
	long long a[45];
	long long x,t;
	a[0]=1;
	a[1]=2;
	for(int i=2;i<45;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<<a[x]<<endl;
	}
	return 0;
}
 
