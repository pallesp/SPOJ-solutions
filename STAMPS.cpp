#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,x=1;
	cin>>t;
	while(x<=t)
	{
		int t,n;
		cin>>t>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,greater<int>());
		printf("Scenario #%d:\n",x);
		int sum=0,i=0,c=0;
		for(i=0;i<n;i++)
		{
		sum+=a[i],c++;
			if(sum>=t)
			break;
		}
		if(i==n)
		printf("impossible\n");
		else
		printf("%d\n",c);
		printf("\n");
		x++;
	}
}  
