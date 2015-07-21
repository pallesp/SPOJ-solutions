#include<iostream>
using namespace std;
int main()
{
	long long t,n;
	cin>>t;
	while(t--)
	{
	cin>>n;
	long long a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		if(sum%n==0)
		cout<<n<<endl;
		else
		cout<<n-1<<endl;
	}
}
