#include<cstdio>
//#include<iostream>
#include<ctype.h>
#include<cstdlib>
#include<cstring>
using namespace std;
long long conv(char *s)
{
	long long res=0,i=0;
	while(s[i]!='\0')
	{
		if(!isdigit(s[i]))
		return -1;	
		res=res*10+(s[i]-'0');
		i++;
	}
	return res;
}
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		char s1[200],s2[10],s3[200],s4[10],s5[200];
		scanf("%s%s%s%s%s",s1,s2,s3,s4,s5);
		long long n1=conv(s1);
		long long n2=conv(s3);
		long long n3=conv(s5);
		if(n1<0)
		n1=n3-n2;
		else if(n2<0)
		n2=n3-n1;
		else	
		n3=n1+n2;
		printf("%lld + %lld = %lld\n",n1,n2,n3);
	}
} 
