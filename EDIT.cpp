#include<vector>
#include<queue>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#define ll long long
#define rl(x) scanf("%lld",&x)
using namespace std;
int main()
{
   // ll t;
   // rl(t);
    string k;
    while(cin>>k)
    {
	string s="";
	for(int i=0;i<k.length();i++)
	{
		if(k[i]>='A' && k[i]<='Z')
		s+='+';
		else
		s+='-';
	}
	//cout<<s<<endl;
        ll c1=0,c2=0;
	
        for(ll i=0;i<s.length();i++)
        {
            if(i&1)
            {
                if(s[i]!='+')
                    c1++;
            }
            else
            {
                 if(s[i]!='-')
                    c1++;
            }
        }
         for(ll i=0;i<s.length();i++)
        {
            if(i&1)
            {
                if(s[i]!='-')
                    c2++;
            }
            else
            {
                 if(s[i]!='+')
                    c2++;
            }
        }
        cout<<min(c1,c2)<<endl;
    }
}
  
