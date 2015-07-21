#include<iostream>
using namespace std;
int main()
{
	long long res,t,n;
	char op;
	cin>>t;
	while(t--)
	{
		op= 0;
		cin>>res;
		while(1)
		{
			cin>>op;
			if(op=='=')
			{
			break;
			}
			
			cin>>n;
			switch(op)
			{		
			case '+' :res=res+n;
				break;
			case '-' :res=res-n;
				break;
			case '*' :res=res*n;
				break;
			case '/':res=res/n;
				break;
			}
			
			
		}
		cout<<res<<endl;
	}
	return 0;
}
