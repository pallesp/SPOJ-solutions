#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		string s;
		cin>>x>>s;
		int cnt[8];
		memset(cnt,0,sizeof cnt);
		for(int i=0,flg=0;i<40;i++)
		{
			flg=(flg<<1 | s[i]=='H');
			if(i>1)
			cnt[flg&7]++;
		}	
		cout<<x<<" ";
		for(int i=0;i<8;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;	
	}
}
