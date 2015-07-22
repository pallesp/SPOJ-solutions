#include<cstdio>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define rl(x) scanf("%lld",&x)
vector<int>ans;
int mask[36000];
void Erase()
{	
	for(int i=2;i<=36000;i++)mask[i]=true;
	for(int i=2;i<=36000;i++)
	{
		if(mask[i]==true)
		{
			int x=0;
			for(int j=i+1;j<=36000;j++)
			{
				if(mask[j]==true)
				x++;
				if(x==i)
				{
					mask[j]=false;
					x=0;
				}
			}
		}
	}
	for(int i=2;i<=36000;i++)
	if(mask[i])
	{
	ans.push_back(i);
	}
	
}
int main()
{
	Erase();
	int t;
	cin>>t;
	while(t)
	{
		cout<<ans[t-1]<<endl;
		cin>>t;
	}
}
