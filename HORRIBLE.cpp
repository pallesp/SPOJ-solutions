#include<cstdio>
#include<cstring>
#include<iostream>
#define ll long long
ll *tree,*lazy;
#define rl(x) scanf("%lld",&x)
using namespace std;
void update_tree(ll node,ll a,ll b,ll i,ll j,ll v)
{
    if(a>j||b<i)
        return;
    if(i<=a && j>=b)
    {
        tree[node]+=(b-a+1)*v;
	//cout<<"tree["<<node<<"] "<<tree[node]<<endl;
        lazy[node]+=v;
    }
    else
    {
        ll mid=(a+b)>>1;
        ll l=node<<1;
        ll r=(node<<1)+1;
        tree[l]+=(mid-a+1)*lazy[node];
        tree[r]+=(b-mid)*lazy[node];
        lazy[l]+=lazy[node];
        lazy[r]+=lazy[node];
        lazy[node]=0;
        update_tree(l,a,mid,i,j,v);
        update_tree(r,mid+1,b,i,j,v);
        tree[node]=tree[l]+tree[r];
		//cout<<"tree["<<node<<"] "<<tree[node]<<"at the end"<<endl;
    }
}
ll query_tree(ll node,ll st,ll end,ll from,ll to)
{
    if(to<st||from>end)
        return 0;
    if(from<=st && to>=end)
    {
	//cout<<tree[node]<<endl;
        return tree[node];
    }
    else
    {
         ll mid=(end+st)>>1;
        ll l=node<<1;
        ll r=(node<<1)+1;
        tree[l]+=(mid-st+1)*lazy[node];
        tree[r]+=(end-mid)*lazy[node];
        lazy[l]+=lazy[node];
        lazy[r]+=lazy[node];
        lazy[node]=0;
        return query_tree(l,st,mid,from,to)+query_tree(r,mid+1,end,from,to);
 
    }
}
int main()
{
    ll t,m,n,p,q,v,sw;
    rl(t);
    while(t--)
    {
        rl(m),rl(n);
        tree=new ll[m<<2];
        lazy=new ll[m<<2];
        memset(tree,0,sizeof tree);
        memset(lazy,0,sizeof lazy);
        while(n--)
        {
            rl(sw);
            if(!sw)
            {
                rl(p),rl(q),rl(v);
                update_tree(1,1,m,p,q,v);
            }
            else
            {
                rl(p),rl(q);
                printf("%lld\n",query_tree(1,1,m,p,q));
            }
        }
    }
} 
