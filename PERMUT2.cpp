#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	while(n!=0)
	{
		int flag=0;
		long long a[n];
		for(long long int i=1;i<=n;i++)
		{
				cin>>a[i];
		}
		for(long long int i=1;i<=n;i++)
		{
				if(a[a[i]]!=i)
				{
					flag=1;
					break;
				}
		}
		 if(flag == 0) {
            printf("ambiguous\n");
            //cout<<"ambiguous\n";
        }    
        else {
            printf("not ambiguous\n");}
		cin>>n;
	}
} 
