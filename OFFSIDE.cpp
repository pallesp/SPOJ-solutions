#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int res[110];
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	while(a!=0 && b!=0)
	{
		int f[a],s[b],flag=0;
		for(int i=0;i<a;i++)
		cin>>f[i];
		for(int i=0;i<b;i++)
		cin>>s[i];
		
		sort(s,s+b);
		//for(int i=0;i<b;i++)
		//cout<<s[i]<<endl;
		for(int i=0;i<a;i++)
		if(s[1]>f[i])
		{
			flag=1;
			break;
		}
		if(flag)	
		printf("Y\n");
		else
		printf("N\n");
		cin>>a>>b;
	}
} 
