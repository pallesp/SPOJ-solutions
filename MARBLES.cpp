#include<iostream>
#include<cstdio>
#define r(N) scanf("%lld",&N);
using namespace std;
long long c(long long n,long long rr)
{
	//cout<<n<<" "<<rr<<endl;
	long long res=1;	
	if(rr>n-rr)
	rr=n-rr;
	for(int i=0;i<rr;i++)
	{
		res*=n--;
		res/=(i+1);
		//cout<<res<<" ";
	}
	//cout<<res<<endl;
	return res;
}
int main()
{
	long long t,n,k;
	r(t);
	while(t--)
	{
		r(n);r(k);
		printf("%lld\n",c(n-1,n-k));
	}
	
} 
