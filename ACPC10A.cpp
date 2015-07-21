#include<iostream>
using namespace std;
int d,r;
int check(int a,int b,int c)
{
	
	if(c-b==b-a)
	{
	return 1;
	}
	else if(c/b==b/a)
	{
		return 2;
	}
	else
	{
	return 0;
	}
}
int main()
{
	int a,b,c,r,re,t;
	cin>>a>>b>>c;
	for(;a!=0 || b!=0 || c!=0;)
	{
		re=check(a,b,c);
		if(re==1)
		{
		cout<<"AP "<<c+(b-a)<<endl;
		}
		else if (re==2)
		{
		cout<<"GP "<<c*(b/a)<<endl;
		}
		else
		{
		}
		//cout<<"value of d="<<d<<"and r,c ="<<d<<c<<endl;
		cin>>a>>b>>c;
		
	}
	return 0;
}
