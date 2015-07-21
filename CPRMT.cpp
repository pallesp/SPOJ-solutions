#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
void cmp(string s1,string s2)
{
	int cou1[26],cou2[26];
	memset(cou1,0,sizeof(cou1));
	memset(cou2,0,sizeof(cou2));
	for(int i=0;i<s1.length();i++)
	{
		cou1[s1[i]-'a']++;
	}
	for(int i=0;i<s2.length();i++)
	{
		cou2[s2[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		 for(int j = min(cou1[i],cou2[i])-1;j >= 0;--j)
		putchar('a'+i);
	}
	cout<<endl;
}
int main()
{
	string s1,s2;
	while(getline(cin,s1) && getline(cin,s2))
	{
		
		cmp(s1,s2);
	}
}
