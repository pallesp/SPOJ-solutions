#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
#define ll long long
#define gc getchar_unlocked 
ll n,a[100][100];
ll read()
{
	char ch;
	int temp;
	
	ch=gc();
	while(ch<'0')
		ch=gc();
	temp=ch-'0';
	ch=gc();
	while(ch>='0')
	{
		temp=(temp<<3)+(temp<<1)+(ch-'0');
		ch=gc();
	}
	return temp;
}
int main()
{
	ll t,x=0;
	t=read();
	while(x<t)
	{
		ll n,q,r,s,dist=0;
		n=read();
		ll a[n][n];
		for(ll i=0;i<n;i++)
		for(ll j=0;j<n;j++)
		a[i][j]=read();
		for(ll k=0;k<n;k++)
		for(ll i=0;i<n;i++)
			for(ll j=0;j<n;j++)
			a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
		//floyd(n);
		q=read();
		/*for(ll i=0;i<n;i++)
		{
			for(ll j=0;j<n;j++)
			cout<<a[i][j]<<"  ";
			cout<<endl;
		}*/
		
		while(q--)
		{
		r=read();s=read();
		dist+=a[r-1][s-1];
		}
		printf("Case #%lld: %lld\n",x+1,dist);
 
		x++;
		
	}	
} 
