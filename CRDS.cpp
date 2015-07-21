#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,t;
	cin>>t;
	while(t--)
	{
		cin>>a;
		b=3*(a*(a+1)/2)-a;
		c=b%1000007;
		cout<<c<<endl;
	}
}
 
