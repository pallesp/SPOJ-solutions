#include<cstdio>
#define ll long long
inline void rl(ll &x)
{
    register ll c = getchar_unlocked();
    x = 0;
    ll neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
    neg = 1;
    c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
    x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
    x = -x;
}
int main()
{
	ll t,n,q,x,y,u,v,co=1;	
	rl(t);	
	while(co<=t)
	{
		rl(n),rl(q);
		ll a[n];
		a[0]=1;
		rl(x);
		y=x;;
		for(ll i=1;i<n;i++)
		{
			rl(x);
			if(x!=y)
			a[i]=a[i-1]+1;
			else
			a[i]=a[i-1];
			y=x;
		}
		//for(ll i=0;i<n;i++)
		printf("Case %lld:",co);
		printf("\n");
		while(q--)
		{	
			rl(u),rl(v);u--,v--;
			if(u==0)
			printf("%lld\n",a[v]);	
			else
			printf("%lld\n",a[v]-a[u]+1);
		}
		co++;
	}
