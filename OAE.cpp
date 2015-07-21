#include<iostream>
using namespace std;
long long mod=314159;
long long e[1000001],o[1000001];
void solve()
{
	e[0]=9;
	o[0]=1;
	for(int i=1;i<1000001;i++)
	{
		e[i]=(((9*e[i-1])% mod)+o[i-1])%mod;
		o[i]=(((9*o[i-1])% mod)+e[i-1])%mod;
	}
}
int main()
{
	solve();
	long long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<e[n-1]<<endl;
	}
}
