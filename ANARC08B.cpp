#include<cstdio>
#include<map>
#include<stack>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
map<string,int>mp1;
map<int,string>mp2;
int main()
{
	string s1;
	cin>>s1;
	mp1["063"]=0,mp1["010"]=1,mp1["093"]=2,mp1["079"]=3,mp1["106"]=4,mp1["103"]=5,mp1["119"]=6,mp1["011"]=7,mp1["127"]=8,mp1["107"]=9;
	mp2[0]="063",mp2[1]="010",mp2[2]="093",mp2[3]="079",mp2[4]="106",mp2[5]="103",mp2[6]="119",mp2[7]="011",mp2[8]="127",mp2[9]="107";
	while(s1[0]!='B')
	{
		string s2,a,b,tmp;		
		int x=0,y=0;
		s2=s1;
		int n=s1.find('+');
		a=s1.substr(0,n);
		b=s1.substr(n+1);		
		b.erase(b.length()-1);
		for(int i=0;i<a.length()-2;i+=3)
		{
		tmp=a.substr(i,3);
		x=x*10+mp1[tmp];
		}
		for(int i=0;i<b.length()-2;i+=3)
		{
		tmp=b.substr(i,3);
		y=y*10+mp1[tmp];
		}
		int ans=x+y;
		stack<int>st;
		while(ans)
		{
			st.push(ans%10);
			ans/=10;
		}
		cout<<s2;
		while(!st.empty())
		{
			cout<<mp2[st.top()];st.pop();
		}
		cout<<endl;
		cin>>s1;
		
	}
}
