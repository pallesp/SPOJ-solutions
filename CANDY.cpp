#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=-1)
	{
		int a[n],ans=0,rs;
		for(int i=0;i<n;i++)
		cin>>a[i],ans+=a[i];
		if(ans%n!=0)
		{
		printf("-1\n");cin>>n;continue;
		}
		else
		{
			int x=ans/n;
			ans=0;
			for(int i=0;i<n;i++)
			{
				rs=x-a[i];
				if(rs>0)
				ans+=rs;
			
			}
			cout<<ans<<endl;
		}
			cin>>n;
			
	}
}
