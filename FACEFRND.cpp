#include<iostream>
#include<cstdio>
#include<set>
#include<map>
using namespace std;
#define read(t) scanf("%lld",&t);
int main()
{
	long long t,k1=0,k2=0,id,n;
	read(t);
	map<int,int>m1,m2;
	while(t--)
	{
		cin>>id>>n;
		long long a[n];
		m1[id]++;
		for(int i=0;i<n;i++)
		{
		read(a[i]);
		m2[a[i]]++;
		}
	}
	for(int i=0;i<=9999;i++)
	{
		if(m1[i]!=0 && m2[i]!=0)
		k1++;
		if(m2[i]!=0)
		{
		k2++;
		//cout<<i<<" ";
		}
		
	}
	cout<<k2-k1<<endl;
	
	
	
	
}
