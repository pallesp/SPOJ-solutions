#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<cstdlib>
#define ll long long
//#define rl(c) scanf("%d",&c)
#define getcx getchar_unlocked
using namespace std;
#define MAX 50009
int a[MAX];
inline void rl( int &n )//fast input function 
{
	n=0;
	int ch=getcx();int sign=1;
        while( ch < '0' || ch > '9' )
	{if(ch=='-')sign=-1; ch=getcx();}
   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   n=n*sign;
}
struct segment
{
	int sum,prefsum,sufsum,maxsum;
}tree[MAX<<3];
segment merge_tree( segment a , segment b)
{
	segment res ;
	res.sum = a.sum + b.sum ;
	res.maxsum = max( max( a.maxsum , b.maxsum ) , (a.sufsum + b.prefsum ) ) ;
	res.prefsum = max( a.prefsum , a.sum + b.prefsum );
	res.sufsum = max( b.sufsum , b.sum + a.sufsum );
	return res ;
}
void build_tree(int node,int a,int b)
{
	if(a==b)
	{
		int n;
		rl(n);
		tree[node].sum=tree[node].prefsum=tree[node].sufsum=tree[node].maxsum=n;
		return;
	}
	int l=node<<1;
	int r=(node<<1)+1;
	int mid=(a+b)>>1;
	build_tree(l,a,mid);
	build_tree(r,mid+1,b);
	tree[node]=merge_tree(tree[l],tree[r]);
}
segment query_tree(int node,int start ,int end ,int x ,int y)
{
	if(start == x && end == y) return tree[node];
	int l = node<<1 ;
	int r = node<<1|1;
	int mid = (start + end )>>1;	
	if(y <= mid ) return query_tree(l,start,mid,x,y); 
	else if( x > mid ) return query_tree(r,mid+1,end,x,y) ; 
	else
	{
	return merge_tree( query_tree(l,start,mid,x,mid) , query_tree(r,mid+1,end,mid+1,y) ) ;
	}
}
void update_tree(int node,int a,int b,int x,int y)
{
	if(a==x && a==b)
	{
		tree[node].sum=tree[node].prefsum=tree[node].sufsum=tree[node].maxsum=y;
		return;
	}
	int l=node<<1;
	int r=(node<<1)+1;
	int mid=(a+b)>>1;
	if(x<=mid)
	update_tree(l,a,mid,x,y);
	else if(x>mid)
	update_tree(r,mid+1,b,x,y);
	tree[node]=merge_tree(tree[l],tree[r]);
	return;
}
int main()
{
	int t,q;
	rl(t);
	build_tree(1,1,t);
	rl(q);
	while(q--)
	{
		int l,r,sw;
		
		rl(sw),rl(l),rl(r);
		if(sw)
		{
		printf("%d\n",query_tree(1,1,t,l,r).maxsum);
		}
		else
		{
		update_tree(1,1,t,l,r);
		}
	}
	
} 
