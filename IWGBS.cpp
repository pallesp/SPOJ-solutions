#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int a[3000]={0},b[3000]={0},c[3000]={0};
int main()
{
	int t;
	//cin>>t;
	//while(t--)
	{
		int n;
		cin>>n;
		if(n==0)
		printf("0\n");
		else if(n==1)
		printf("2\n");
		else if(n==2)
		printf("3\n");
		else
		{
			memset(a,0,sizeof a);
			memset(b,0,sizeof b);
			memset(c,0,sizeof c);
			a[0]=2;
			b[0]=3;
			int acount=1,bcount=1,ccount=0;
			for(int f=1;f<=n-2;f++)
			{
				int carry=0,ccount=0,temp;
				for(int j=0;j<acount||j<bcount;j++)
				{
					temp=a[j]+b[j]+carry;
					c[ccount++]=temp%10;
					carry=temp/10;
					
				}
				if(carry!=0)
				{
					while(carry!=0)
					c[ccount++]=carry%10,carry/=10;
				}
				acount=0;
				for(int i=0;i<bcount;i++)
				{
					a[acount++]=b[i];
				}
				bcount=0;
				for(int i=0;i<ccount;i++)
				{
					b[bcount++]=c[i];	
				}
				if(f==n-2)
				for(int i=ccount-1;i>=0;i--)
				cout<<c[i];
				
			}
			cout<<endl;
			
		}
	}
}
