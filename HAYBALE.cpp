#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define rl(x) scanf("%d",&x)
int bit[1000000],arr[1000000];
void update(int idx,int val)
{
	while(idx<=1000005)
	{
		bit[idx]+=val;
		idx+=(idx&-idx);
	}
}
int query(int idx)
{
	int sum=0;
	while(idx>0)
	{
		sum+=bit[idx];
		idx-=(idx&-idx);
	}
	return sum;
}
int main()
{
	int n,q,u,v;
	rl(n),rl(q);
	memset(bit,0,sizeof bit);
	while(q--)
	{
		rl(u),rl(v);
		update(u,1);
		update(v,-1);		
	}
	//printf("updATE ok\n");
	for(int i=0;i<=n;i++)
	{
		arr[i]=query(i);
	}
	//printf("Sort ok\n");
	sort(arr+1,arr+n);
	printf("%d\n",arr[n/2 +1]);
	
} 
