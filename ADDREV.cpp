#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int reverse(unsigned int in)
{
	int out=0;
	while(in)
	{
        out *= 10;
        out += in % 10;
        in /= 10;
	}
	return out;
}
int main()
{
	unsigned int a,b,t,c;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	c=reverse(a)+reverse(b);
	c=reverse(c);
	cout<<c<<endl;
	}
	
	
	
}
