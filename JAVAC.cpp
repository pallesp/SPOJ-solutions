#include<cstdio>
#include<cstring>
#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	int t;
	string s;
	//cin>>t;
	while(cin>>s)
	{
		string tmp="";
		int c=0,java=0,big=0;
		int len=s.length();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='_')
			c=1;
			if(s[i]>='A' && s[i]<='Z')
			{
			java=1;big++;
			}
		}
	
		if(big==len||s[0]=='_'||(s[0]>='A' && s[0]<='Z'))
		{
		cout<<"Error!\n";continue;
		}
		if((java==1 && c==1)|| s[len-1]=='_')
		cout<<"Error!";
		else if(java==1 && c==0)
		{
			for(int i=0;i<len;i++)
			{
				if(s[i]>='A' && s[i]<='Z')
				printf("_%c",tolower(s[i]));
				else
				cout<<s[i];
			}
		}
		else if(java==0 && c==1)
		{
			int f=0,x=0;
			for(int i=0;i<len;i++)
			{
				if(s[i]=='_')
				{
					f=1;i++;
					if(s[i]=='_')
					{
					x=1;
					}
					
				}
				if(x==1)
				{
				cout<<"Error!";tmp="";break;
				}
				if(f)
				{
				  if(s[i]<'a' || s[i]>'z')
				   i++;	
				tmp+=toupper(s[i]);f=0;
				}
				else
				tmp+=s[i];
			}
		}
		else
		tmp=s;
   		cout<<tmp;
		cout<<endl;
	}
} 
