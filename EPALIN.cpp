#include<cstdio>
#include<cstring>
#include<iostream>
#define ll long long
using namespace std;
string s;
void table(string s1,ll len1)
{
    ll len=s1.length();
    ll pref[len];
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
	ll res=len1-pref[len-1];
    cout<<s;
    if(pref[len-1]!=len1)
    for(ll i=res-1;i>=0;i--)
        cout<<s[i];
    cout<<endl;
}
int main()
{
    while(cin>>s)
    {
        ll len1=s.length();
        string s1="";
        for(ll i=len1-1;i>=0;i--)
            s1+=s[i];
            s1+="#";
            s1+=s;
            table(s1,len1);
       // cout<<s1<<endl;
    }
	return 0;
} 
