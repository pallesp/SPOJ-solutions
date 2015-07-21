#include<cstdio>
#include<iostream>
#include<cstring>
#define MAX 1000000 
int P[2003][2003];
int c[2005];
using namespace std;
int main()
{
	int t,ca=1;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		
		memset(P,0,sizeof P);
		for(int i=0;i<n;i++)
		P[i][i]=1;
		for(int L=2;L<=n;L++)
		{
			for(int i=0;i<n-L+1;i++)
			{
				int j=i+L-1;
				if(L==2)
				P[i][j]=(s[i]==s[j]);
				else
				P[i][j]=(s[i]==s[j])&&P[i+1][j-1];
			}
		}
		for (int i=0; i<n; i++)
    		{
        		if (P[0][i] == true)
            		c[i] = 0;
        		else
        		{
        		    c[i] = MAX;
        		    for(int j=0;j<i;j++)
            			{
                		if(P[j+1][i] == true && 1+c[j]<c[i])
                		    c[i]=1+c[j];
            			}
        		}
    		}
		cout<<c[n-1]+1<<endl;
	}
} 
