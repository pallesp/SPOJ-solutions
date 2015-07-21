#include<cstdio>
#include<stack>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	int t,k=1;	
	string s;
	cin>>s;
	while(s[0]!='-')
	{
		int res=0;
		stack<char>st;
		while(!st.empty())
		{
			st.pop();
		}		
		for(int i=0;i<s.length();i++)
		{
			if(st.empty())
			st.push(s[i]);
			else
			{
				if(s[i]=='}')	
				{
					if(st.top()=='{')
					st.pop();
					else
					st.push(s[i]);
				}
				else
			  		 st.push(s[i]);
			}
			
		}
		//cout<<st.size()<<endl;
		while(!st.empty())
		{
			char c=st.top();
			st.pop();
			if(c==st.top())
			{
				res+=1;
			}
			else
				res+=2;
			st.pop();
		}
		cout<<k<<". "<<res<<endl;
		cin>>s;k++;
	}
} 
