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
	for(int i=1;i<n;i++)
	{	
		//cout<<(i+1)<<" "<<<<endl;
		x=(i+1);
		y=(i+1-pref[i]);
		//cout<<x<<" "<<y<<endl;
		if(pref[i]>0 and x%y==0)
		printf("%d %d\n",i+1,x/y);
	}	
}
int main()
{
	int t,x=1;
	scanf("%d",&t);
	while(x<=t)
	{
	int n;
	scanf("%d\n",&n);
	char pat[n+1];
	int pref[n+1];
	scanf("%s",pat);
	printf("Test case #%d\n",x);
	prefix(pat,n,pref);
		x++;
	}
	//search(text,pat);
}
