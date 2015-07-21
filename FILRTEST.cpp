#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#define ll long long
using namespace std;
ll pref[1000050];
ll prefix(string s1,ll len)
{
    ll m=0,res;
    pref[0]=0;
    ll j=0;
    for(ll i=1;i<len;i++)
    {
        while(j>0 && s1[i]!=s1[j])
            j=pref[j-1];
        if(s1[i]==s1[j])
            j++;
        pref[i]=j;
    }
	return pref[len-1];
}
int main()
{
	ll n;string s;
	cin>>n>>s;
	while(n!=-1 && s!="*")	
	{
		string s1=s;
		ll len=s.length();
		ll mtch=len-prefix(s,len);
		if(n<len)
		{
		printf("0\n");
		}
		else
		printf("%lld\n",(n-len)/mtch +1);
		cin>>n>>s;
	}
} 
