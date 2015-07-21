#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
void prefix(char *s,int n,int *pref)
{
	int x,y;
	int j=0,i;
	pref[0]=0;
	for(int i=1;i<n;i++)
	{
		while(j>0 && s[j]!=s[i])
		j=pref[j-1];
		if(s[i]==s[j])	
		j++;
		pref[i]=j;
	}
	int ans=1;
	x=n-pref[n-1];
	if(n%x==0)
	ans=n/x;
	printf("%d\n",ans);	
}
int main()
{
	
	char pat[100005];
	scanf("%s",pat);
	while(strcmp(pat,"*")!=0)
	{
	int n=strlen(pat);
	int pref[n+1];
	prefix(pat,n,pref);
	scanf("%s",pat);
	}
} 
