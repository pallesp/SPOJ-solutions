#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int re=0,l,t;
	//cin>>t;
	while(1)
	{
		cin>>l;
		if(l==0)
		break;
		while(l>0)
		{
		re=re+l*l;
		l--;
		}
		cout<<re<<endl;
		re=0;
	}
	return 0;
}
