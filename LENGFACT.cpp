#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,sum=0;
		cin>>n;
		if(n<3)
		{
		cout<<"1"<<endl;
		continue;
		}
		sum=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
		cout<<sum<<endl;
	}
}
