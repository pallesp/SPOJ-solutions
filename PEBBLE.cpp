#include<iostream>
using namespace std;
int main()
{
	long long x=1;
	string s;
	while(cin>>s)
	{
		
		int temp=0;
		int i=0;
		long res=0;
		for(i=0;i<s.length();i++)
		{
			if((s[i]=='1' && temp==0) ||(s[i]=='0' && temp==1))
			{
				res++;
				//cout<<"yes\n";
				temp=1-temp;
			}
		}
		cout<<"Game #"<<x<<": "<<res<<endl;
		x++;
	}
}
 
