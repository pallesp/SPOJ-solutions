#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
vector<string>vs;
int v[105][105];
long long n,m;
int x1,y1;
string tar="ALLIZZWELL";
int checkpattern(int r, int c, int l)
{
	//cout << r << ' ' << c << ' ' << l <<"  "<<vs[r][c]<<endl;
	if(l==10)
		return true;
	v[r][c]=1;
	for(int i=-1;i<=1;i++)
		for(int j=-1;j<=1;j++)
		{
			int r1=r+i, c1=c+j;
			if((i==0&&j==0)||r1<0||r1>=n||c1<0||c1>=m||vs[r1][c1]!=tar[l]) 
				continue;
			if(v[r1][c1])
				continue;
			if( checkpattern(r1,c1,l+1) ){
				v[r][c]=0;
				//cout<<vs[r1][c1]<<endl;
				return true;
			}
		}
	v[r][c]=0;
	return false;
}
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{		
		string s;
		memset(v,0,sizeof v);
		scanf("%lld%lld",&n,&m);
		vs.clear();
		for(int i=0;i<n;i++)
		{
		cin>>s;
		vs.push_back(s);
		}
		int f=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
			{
				if(vs[i][j]=='A' && checkpattern(i,j,1))
				{
				f=1;
				break;
				}
			}
		if(f==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
