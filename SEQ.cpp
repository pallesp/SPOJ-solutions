#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define ll long long
#define MOD 1000000000
#define rl(x) scanf("%lld",&x)
ll id[11][11],f[11][11],c[11][11];
void print(ll mat[][11],ll n)
{
	for(int i=1;i<=n;i++){
	   for(int j=1;j<=n;j++)
		cout<<mat[i][j]<<" ";
	   cout<<endl;
	}
	cout<<endl;
}
void power(ll id[][11],ll f[][11],ll n,ll k1)
{
	while(n)
	{
		if(n&1)
		{
			for(int i=1;i<=k1;i++)
                	   for(int j=1;j<=k1;j++)
                	   {
                               c[i][j]=0;
                	       for(int k=1;k<=k1;k++)
                    		   c[i][j]+=(f[i][k]*id[k][j])%MOD;
			   }
			   for(int i=1;i<=k1;i++)
                   	      for(int j=1;j<=k1;j++)
                                 id[i][j]=c[i][j]%MOD; 
			//print(id,n); 
		}
		        for(int i=1;i<=k1;i++)
                	   for(int j=1;j<=k1;j++)
                	   {
                               c[i][j]=0;
                	       for(int k=1;k<=k1;k++)
                    		   c[i][j]+=(f[i][k]*f[k][j])%MOD;
			   }
			   for(int i=1;i<=k1;i++)
                   	      for(int j=1;j<=k1;j++)
                                 f[i][j]=c[i][j]%MOD;
				//print(id,n);
		n=n>>1;
	}
	cout<<id[1][1]<<endl;
}
int main()
{
	ll t,x,n;
	rl(t);
	while(t--)
	{
		rl(n);
		memset(id,0,sizeof id);
		memset(f,0,sizeof f);
		for(int i=1;i<n;i++)
		f[i+1][i]=1;
		for(int i=n;i>=1;i--)
		{
			rl(x);
			id[i][1]=x;	
		}
		//print(id,n);
		for(int i=1;i<=n;i++)
		{
			rl(x);
			f[1][i]=x;	
		}
		//print(f,n);
		ll k;
		rl(k);
		if(k<=n)
		{
		cout<<id[k][1]<<endl;
		continue;
		}
		//cout<<k-n<<endl;
		power(id,f,k-n,n);
	}
	
} 
