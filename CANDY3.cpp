#include<iostream>
using namespace std;
int main()
{
	long long int t,n,sum,i,a,flag=0;
	cin>>t;
	cout<<endl;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(i=0;i<n;i++)
		{
		cin>>a;
		sum=(sum+a)%n;
		}
		if(sum==0)
		{
		cout<<"YES\n";
		}
		else
		{
		cout<<"NO\n";
		}
	cout<<endl;
		
	}
}
