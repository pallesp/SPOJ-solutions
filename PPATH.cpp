#include<cstdio>
#include<vector>
#include<iostream>
#include<map>
#include<utility>
#include<queue>
#include<cstring>
#include<bitset>
using namespace std;
vector<int>primes;
#define pii pair<int,int>
#define ll int
bitset<1000000100>bs;
#define rl(x) scanf("%d",&x)
int a[]={0,1,2,3,4,5,6,7,8,9};
void sieve()
{
	int n=10005;
	bs.set();
	bs[0]=0,bs[1]=0;
	for(ll i=2;i<=(n);i++)
	{
		if(bs[i])
		{
		  for(ll j=2;j*i<=n;j++)
		  bs[i*j]=0;
		}	
	}
}
int main()
{
	sieve();
	int t;	
	rl(t);
	while(t--)
	{
		int x,y,num,dist,temp;
		rl(x),rl(y);
		queue<pii>Q;
		Q.push(pii(x,0));
		int vis[10002];
		memset(vis,0,sizeof vis);
		while(!Q.empty())
		{
			x=Q.front().first;
			//temp=x;
			vis[x]=1;
			dist=Q.front().second;
			if(x==y)
			{
			printf("%d\n",dist);
			break;
			}
			int thsnd,hun,ten;
			thsnd=x/1000,x=x%1000,hun=x/100,x=x%100,ten=x/10,x=x%10;
			Q.pop();
			for(int i=0;i<10;i++)
			{
				num=thsnd*1000+hun*100+ten*10+a[i];
				if(num>1000 && bs[num] && !vis[num] )
				{
				Q.push(pii(num,dist+1));
				}
				num=thsnd*1000+hun*100+a[i]*10+x;
				if(num>1000 && bs[num] && !vis[num])
				{
				Q.push(pii(num,dist+1));
				}
				num=thsnd*1000+a[i]*100+ten*10+x;
				if(num>1000 && bs[num] && !vis[num] )
				{
				Q.push(pii(num,dist+1));
				}
				num=a[i]*1000+hun*100+ten*10+x;
				if(num>1000 && bs[num] && !vis[num])
				{
				Q.push(pii(num,dist+1));
				}	
			}
			/*for(int i=0;i<10;i++)
			{
					
			}
			for(int i=0;i<10;i++)
			{
					
			}
			for(int i=0;i<10;i++)
			{
					
			}*/
		}
		if(Q.empty())
		printf("Impossible\n");
		
	}
	
} 
