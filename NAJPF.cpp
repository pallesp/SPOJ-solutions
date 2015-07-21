#include<cstdio>
#include<vector>
#include<iostream>
#include<cstring>
using namespace std;
char pat[1000010];
char text[1000010];
int pref[1000010];
void prefix(char *s)
{
	int n=strlen(s),flag=1;
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
	
    
}
void search(char *text,char *pat)
{
	int len=strlen(text),flag=1,c=0;
	vector<int>v;
	int m=strlen(pat);
	int j=0;
	for(int i=0;i<len;i++)
	{
		while(j>0 && text[i]!=pat[j])
		j=pref[j-1];
		if(text[i]==pat[j])
		j++;
		if(j==m)
		{
		flag=0;
		//printf("%d\n",i-m+2);
		v.push_back(i-m+2);c++;
		j=pref[j-1];
		}
	}
	if(!flag)
	{
	printf("%d\n",c);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	}
	else
	printf("Not Found\n");
	cout<<endl;
}
int main()
{
	int n;
	scanf("%d\n",&n);
	while(n--)
        {
		scanf("%s",text);
    		memset(pref,0,sizeof(pref));
    		scanf("%s",pat);
		prefix(pat);
		search(text,pat);
		//for(int i=0;i<strlen(pat);i++)
		/*printf("%d",pref[i]);
		printf("\n");*/
	}
 
} 
