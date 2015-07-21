#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#define r(N) scanf("%lld",&N)
using namespace std;
int main()
{
	long long x;
	r(x);
	while(x--)
	{
		int t;
		char s[1000008];
		int f=1,mid;
		scanf("%s",s);
		int l=strlen(s);
		for(int i=0;i<l;i++)
		{
			if(s[i]!='9')
			{
				f=0;
				break;
			}
		}
		if(f==1)
		{
			s[0]='1';
			for(int i=1;i<l;i++)
			s[i]='0';
			s[l]='1';
			s[l+1]='\0';
		}
		t=0;
		if(f!=1)
		{
			for(int i=0;i<l/2;i++)
			{
				if(s[i]<s[l-i-1])
				t=-1;
				if(s[i]>s[l-i-1])
				t=1;
				s[l-i-1]=s[i];
			}
			//printf("%s\n",s);
			if(l%2==1)
			mid=l/2;
			else
			mid=l/2-1;
			int i=0;
			if(t==-1||t==0)
			{
				
				while(s[mid-i]=='9')
				{
				s[mid-i]='0';
				s[l-mid-1+i]='0';
				i++;
				}
				s[mid-i]++;
			s[l-mid-1+i]=s[mid-i];
				
			}
			//printf("%s\n",s);
		}
		printf("%s\n",s);
		
	}
}
