#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	long long t,n;
	//cin>>t;
	//while(t--)
	{
		string s="";
		cin>>n;
		if(n==0)
		{
		printf("0\n");
		}
		else
		{
			long long div=-2;
			while(n)
			{
				if(n%div<0)
				{
					//cout<<n%div<<" "<<n/div<<endl;
					s=char((n%div +2)+'0')+s;
					n=n/div +1;
				}
				else
				{	
					//cout<<n%div<<" "<<n/div<<endl;	
					s=char((n%div)+'0')+s;
					n=n/div;
				}
			}
				
		}
		cout<<s<<endl;
	}
} 
