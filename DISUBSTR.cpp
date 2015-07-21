#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 1000000
string s;
int n,stp;
int SA[MAX],iSA[MAX],LCP[MAX],temp[MAX]={0};
bool cmp(int i,int j)
{
	if(iSA[i]!=iSA[j])
 	return iSA[i]<iSA[j];
	i+=stp;	
	j+=stp;
	return (i<n && j<n)?(iSA[i]<iSA[j]):i>j; 
}
void constructSA()
{
	n=s.length();
	for(int i=0;i<n;i++)
	{
		SA[i]=i;
		iSA[i]=(int)s[i];
	}
	memset(temp,0,sizeof temp);
	for(stp=1;;stp*=2)
	{
		sort(SA,SA+n,cmp);
		for(int i=0;i<n-1;i++)
		temp[i+1]=temp[i]+cmp(SA[i],SA[i+1]);	
		for(int i=0;i<n;i++)
		{
			iSA[SA[i]]=temp[i];
		}
		if(temp[n-1]==n-1)
		break;
	}
	
}
void constructLCP()
{
	for(int i=0,k=0;i<n;i++)
	{
		if(iSA[i]!=n-1)
		{
			int j=SA[iSA[i]+1];
			while(s[i+k]==s[j+k])
			k++;
			LCP[iSA[i]]=k;
			if(k>0)
			k--;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)	
	{
		int ans=0;
		cin>>s;
		constructSA();
		constructLCP();
		for(int i=0;i<n;i++)
		ans+=LCP[i];
		cout<<((n*(n+1))/2)-ans<<endl;
		/*memset(SA,0,sizeof SA);
		memset(iSA,0,sizeof iSA);*/
		memset(LCP,0,sizeof LCP);
		memset(temp,0,sizeof temp);
	}
} 
