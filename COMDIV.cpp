#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long a,b,res=0;
		scanf("%lld%lld",&a,&b);
		long long n=__gcd(a,b);
		//cout<<n<<endl;
		for(int i=1;i<=sqrt(n);i++)	
		{
			if(n%i==0)
			{
			res=res+2;
			if(n/i==i)
			res--;
			}
		}
		printf("%lld\n",res);
	}
}
