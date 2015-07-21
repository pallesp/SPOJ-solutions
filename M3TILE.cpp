#include<cstdio>
#include<iostream>
using namespace std;
long long tiling[32];
int main()
{
	tiling[0]=1;
	tiling[1]=0;
	tiling[2]=3;
	tiling[3]=0;
	for(int i=4;i<=31;i++)
	{
		tiling[i]=4*tiling[i-2]-tiling[i-4];
	}
	int n;
	cin>>n;
	while(n!=-1)
	{
		cout<<tiling[n]<<endl;cin>>n;
	}
} 
