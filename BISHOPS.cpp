#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]-'0'==1 && s.length()==1)
		cout<<"1\n";
		else if(s[0]=='0')
		cout<<"0"<<endl;
		else
		{
		string res="",temp="";
		int len=s.length();
		if(s[len-1]-'0'!=0)
		{
		int chnge=s[len-1]-'0';
		s[len-1]=chnge-1+'0';
		}
		else
		{
			int x=len-1;
			s[x]='9';x--;		
			while(s[x]=='0')
			{
				s[x]='9';
				x--;
			}
			s[x]=((s[x]-'0')-1)+'0';
		}
		int num=0,carry=0,ans=0;
		for(int i=len-1;i>=0;i--)
		{		
			num=(s[i]-'0')*2;
			ans=num+carry;
			temp=((ans%10)+'0');
			res=temp+res;
			carry=ans/10;
		}
		if(carry!=0)
		{
		temp=(carry+'0');
		res=temp+res;
		}
		cout<<res<<endl;
		}
	}
} 
