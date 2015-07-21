#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,m;
		scanf("%lld%lld",&n,&m);
		long long a[n],b[m];
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<m;i++)
		{
			scanf("%lld",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+m);
		if(a[n-1]>=b[m-1])
		 printf("Godzilla\n");
       		else
           	 printf("MechaGodzilla\n");
	}
} 
