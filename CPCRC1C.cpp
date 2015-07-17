#include<cstdio>
#include<cmath>
using namespace std;
long long find(long long n)
{
	if(n==0)return 0;
	if(n<10)return n*(n+1)/2;
	long long N=n,c=0;
	while(N>0)
	{
		c++;
		N/=10;
	}
	long long p=pow(10,c-1);
	N=n/p;
	return N*find(p-1)+((N*(N-1)/2)*p)+N*(1+n%p)+find(n%p); 
}

int main()
{
	long long a,b,ans;
	scanf("%lld%lld",&a,&b);
	while((a+b)!=-2)
	{
	ans=find(b)-find(a-1);
	printf("%lld\n",ans);
	scanf("%lld%lld",&a,&b);
	}
}
