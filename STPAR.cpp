#include<cstdio>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
    long long n;
     cin>>n;
     while(n)
    {
        long long ans=1;
 
        long long a[n+10];
        for(long long i=1;i<=n;i++)
            cin>>a[i];
        stack<long long>st;
        long long strt=1;
        for(long long i=1;i<=n;i++)
        {
            if(a[i]==strt)
                strt++;
            else
            {
                if(st.empty())
                {
                      st.push(a[i]);
                      //cout<<"pushing "<<a[i]<<endl;
                }
 
                else if(!st.empty() && st.top()<a[i])
                {
                   // cout<<"become zero\n";
                    ans=0;
                    break;
                }
                else
                    st.push(a[i]);
            }
 
            while(!st.empty() && st.top()==strt)
            {
                st.pop();
                strt++;
            }
        }
        if(!ans)
            printf("no\n");
        else if(strt-1==n && st.empty())
            printf("yes\n");
            cin>>n;
    }
}
