#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,pos,mx=0,tmpans=0,robmx=0,reqans=0,sz=0;
		cin>>n>>pos;
		long long arr[n],lis[n],temp[n];
		for(int i=0;i<n;i++){cin>>arr[i];lis[i]=1;}
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
					if(arr[i]>arr[j] and lis[i]+1>lis[j])
					lis[j]=lis[i]+1;
			}
		}
		for(int i=0;i<n;i++)
		tmpans=max(tmpans,lis[i]);
		if(lis[pos]!=0)
		{
			robmx=lis[pos];
			for(int i=pos+1;i<n;i++)
			{
				temp[sz]=arr[i];
				lis[sz++]=1;
			}
		}
		for(int i=0;i<sz;i++)
		{
			for(int j=i+1;j<sz;j++)
			{
					if(temp[i]>temp[j] and lis[i]+1>lis[j])
					lis[j]=lis[i]+1;
			}
		}
		for(int i=0;i<sz;i++)
		reqans=max(reqans,lis[i]);
		cout<<max(tmpans,robmx+reqans)<<endl;
	}
}
