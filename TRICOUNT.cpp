#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int re=0,l,t;
	cin>>t;
	while(t--)
	{
		cin>>l;
		re=l*(l+2)*(2*l+1)/8;
		cout<<re<<endl;
		re=0;
	}
	return 0;
}
 
