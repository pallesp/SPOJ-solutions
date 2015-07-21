#include<iostream>
using namespace std;
int main()
{
	int c;
	cin>>c;
	while(c)
	{
		string s;
		cin>>s;
		int r=s.length()/c;
		//cout<<"Length="<<s.length()<<"and r="<<r<<endl;
		char a[r][c];
		int k=0;
		for(int i=0;i<r;i++)
		{
			if(i%2==0)
			{
				for(int j=0;j<c;j++)
				{
				a[i][j]=s[k++];
				}
			}
			else
			{
				for(int j=c-1;j>=0;j--)
				{
				a[i][j]=s[k++];
				}
			}
		}
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<r;j++)
			{
			cout<<a[j][i];
			}
		}
		cout<<endl;
		cin>>c;
		
	}
}
