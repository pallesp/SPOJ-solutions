#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	long k,l,m,x;
	cin>>k>>l>>m;
	bool arr[1000007];
	arr[0]=false;memset(arr,0,sizeof arr);
	for(long long i=1;i<=1000005;i++)
	{
		if(i>=1 and (arr[i-1]==false))
		{
			arr[i]=true;
		}
		if(i>=k and arr[i-k]==false)
		arr[i]=true;
		if(i>=l and arr[i-l]==false)
		arr[i]=true;
	}
	for(long long i=0;i<m;i++)
	{
		cin>>x;
		if(arr[x])
		cout<<"A";
		else
		cout<<"B";
	}
	cout<<endl;
}
