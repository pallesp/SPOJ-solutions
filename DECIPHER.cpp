#include<cstdio>
#include<iostream>
using namespace std;
 
 
int main()
    {
        int t;
        long long a,b,c;
        for(scanf("%d",&t);t>0;t--)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            cout<<a*a-2*b<<endl;
         
        }
    } 
