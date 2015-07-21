#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
#define rl(x) scanf("%d",&x)
int main()
{
	int t;
	rl(t);
	while(t--)
	{
		int r,c,ans=0,hcut=1,vcut=1;
		rl(r),rl(c);
		int a[r],b[c];
		for(int i=0;i<r-1;i++)
		rl(a[i]);
		for(int i=0;i<c-1;i++)
		rl(b[i]);
		sort(a,a+r-1,greater<int>());
		sort(b,b+c-1,greater<int>());
		int i=0,j=0;
		while(i<r-1 && j<c-1)
		{
			if(a[i]>b[j])
			{
				ans+=(hcut*a[i]);
				i++;
				vcut++;
			}
			else
			{
				ans+=(vcut*b[j]);
				j++;
				hcut++;
			}
			
		}
		while(i<r-1)
		{
			ans+=(hcut*a[i]);
				i++;
				vcut++;
		}
		while(j<c-1)
		{
			ans+=(vcut*b[j]);
				j++;
				hcut++;
		}
		cout<<ans<<endl;
 
	}
} 
