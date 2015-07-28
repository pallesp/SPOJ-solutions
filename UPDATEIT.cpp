#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define getcx getchar_unlocked
inline void rl( int &n )
{
    n=0;
    int ch=getcx();int sign=1;
    while( ch < '0' || ch > '9' )
    {if(ch=='-')sign=-1; ch=getcx();}
    while( ch >= '0' && ch <= '9' )
    n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
    n=n*sign;
 }
void update(long long BIT[],int n,int x,int val)
{
	while(x<=n)
	{
		BIT[x]=BIT[x]+val;
		x+=(x&-x);
	}
}
long long query(long long BIT[],int a)
{
	long long sum=0;
	while(a>0)
	{
		sum+=(BIT[a]);
		a-=(a&-a);
	}
	return sum;
}
int main()
{
	int t;
	rl(t);
	while(t--)
	{
		int n,m,x,y,q,val,tmp;
		rl(n),rl(m);
		long long BIT[n+10];
		memset(BIT,0,sizeof BIT);
		while(m--)
		{	
			rl(x),rl(y),rl(val);x++,y++;
			update(BIT,n,x,val);
			update(BIT,n,y+1,-val);
		}
		rl(q);
		while(q--)
		{
			rl(tmp);
			cout<<query(BIT,tmp+1)<<endl;
		}
	}
}
