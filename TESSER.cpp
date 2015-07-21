#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
#define r(N) scanf("%lld",&N)
int KmpSearch(char *txt,char *pat,int *pref)
{
	long long x=strlen(txt),n=strlen(pat);
	long long  i=0,k;
		for( k = 0, i = 0; i < x; i++ )
		{
        		while( k && txt[i] != pat[k] )
        		    k = pref[k-1];
        		if(txt[i] == pat[k]) k++;
        		if(k == n)
			{
			return 1;
        		}
    		}
	return 0;
}
int main()
{
	long long t;
	r(t);
	while(t--)
	{
		long long n;
		string s="";
		r(n);
		long long a[n];
		r(a[0]);
		for(long long i=1;i<n;i++)
		{
			r(a[i]);
			if(a[i-1]<a[i])
			s+="G";
			else if(a[i-1]==a[i])
			s+="E";
			else
			s+="L";
			
		}
		char text[s.length()+10];
		for(long long i=0;i<s.length();i++)
		text[i]=s[i];
		char pat[100050];
		scanf("%s",pat);
		long long n1=strlen(pat);
		int pref[100050];
		memset(pref,0,sizeof(pref));
		pref[0]=0;
		int i=1,len=0;
		while(i<n1)
		{
			if(pat[i]==pat[len])
			{
			len++;
			pref[i]=len;
			i++;
			}
			else
			{
				if(len!=0)
				{
				len=pref[len-1];
				}
				else
				{
				pref[i]=0;i++;
				}
			}
		}
		/*for(int i=0;i<n1;i++)
		cout<<pref[i]<<" ";
		cout<<endl;*/
		if(KmpSearch(text,pat,pref))
		{
		printf("YES\n");
		}
		else
		printf("NO\n");
		
	}
} 
