#include<iostream>
using namespace std;
char in[401],out[401],st[401];
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
	cin>>in;
	int j=0,top=0;
	for(int i=0;in[i]!='\0';i++)
	{	
		if(in[i]>='a' &&in[i]<='z')
		{
			out[j]=in[i];
			j++;
		}
		else if(in[i]=='(' || (in[i]=='+')||(in[i]=='-')||(in[i]=='*')||(in[i]=='/')||(in[i]=='^'))
		{
			st[top++]=in[i];
		}
		else if(in[i]==')')
		{
			while(st[top-1]!='(')
			{
				out[j]=st[top-1];
				top--;
				j++;
			}
				top--;
		}
	}
	while((top-1)>=0)
	{
		out[j++]=st[top-1];
		top--;
	}
	out[j]='\0';
	cout<<out<<endl;
	}
}  
