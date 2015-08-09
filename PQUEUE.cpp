#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
#include<algorithm>
using namespace std;
#define x first
#define y second
#define PII pair<int,int> 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		priority_queue<int>PQ;
		queue<PII>Q;
		int n,k,p,q,c=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			Q.push(PII(a[i],i));
			PQ.push(a[i]);
		}
		p=a[k],q=k;
		while(!Q.empty())
		{
			if(PQ.top()==Q.front().x)
			{
				if(Q.front().y==k)
				{
				c++;
				break;
				}
				else
				{
				c++;	
				Q.pop();PQ.pop();
				}
			}
			else
			{
				Q.push(Q.front());
				Q.pop();
			}
		}
		cout<<c<<endl;
	}
}
