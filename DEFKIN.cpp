#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define rl(x) scanf("%lld",&x)
using namespace std;
int main()
{
    ll t,m1,m2,x,y;
    rl(t);
    while(t--)
    {
        ll r,c,q;
        vector<ll>v1,v2;
        rl(r),rl(c),rl(q);
        v1.push_back(r+1);
        v2.push_back(c+1);
         v1.push_back(0);
        v2.push_back(0);
        while(q--)
        {
            rl(x),rl(y);
            v1.push_back(x);
            v2.push_back(y);
 
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        m1=0,m2=0;
        for(ll i=1;i<v1.size();i++)
        {
            m1=max(m1,v1[i]-v1[i-1]-1);
            m2=max(m2,v2[i]-v2[i-1]-1);
        }
        cout<<m1*m2<<endl;
    }
}
