#include<cstdio>
#include<map>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int a[n+1];
		map<int,int>mp;
		int ax1[n+1],cnt=1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mp[a[i]]=i;
		}
		int m;
		cin>>m;
		int b[m+1];
		int ax2[m+1];
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
			if(mp[b[i]]>0)
			{
				
				ax1[cnt]=mp[b[i]];
				ax2[cnt]=i;
				cnt++;
			}
		}
		long long s1[cnt+2],s2[cnt+2],k=0,sum=0,l=0;ax1[0]=0,ax2[0]=0;
		for(int i=1;i<cnt;i++)
		{
			sum=0;
			for(int j=ax1[i-1]+1;j<=ax1[i];j++)
			{
				sum+=a[j];
			}
			s1[k++]=sum;
		}
		sum=0;
		for(int i=ax1[cnt-1]+1;i<=n;i++)
		sum+=a[i];
		s1[k++]=sum;
		for(int i=1;i<cnt;i++)
		{
			sum=0;
			for(int j=ax2[i-1]+1;j<=ax2[i];j++)
			{
				sum+=b[j];
			}
			s2[l++]=sum;
		}
		sum=0;
		for(int i=ax2[cnt-1]+1;i<=m;i++)
		sum+=b[i];
		s2[l++]=sum;
		for(int i=1;i<l;i++)
		{
			s1[i]+=max(s1[i-1],s2[i-1]);
			s2[i]+=max(s1[i-1],s2[i-1]);
		}
		cout<<max(s1[l-1],s2[l-1])<<endl;
		cin>>n;
	}
}
