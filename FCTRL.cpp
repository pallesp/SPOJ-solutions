
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=1;
		unsigned long sum=0,n;
		cin>>n;
		while(pow(5,i)<=n)
		{
		sum=sum+n/pow(5,i);
		i++;
		}
		cout<<sum<<endl;
	}
}
