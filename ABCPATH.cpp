#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
struct cow
{
	int x;
	int y;
	int dist;
};
queue<cow> q;
cow p1,p2;
const int N=60;
char a[N][N];
int px[9]={0,0,1,-1,0,1,-1,-1,1};
int py[9]={0,1,0,0,-1,1,-1,1,-1};
int ans,n,m;
int mark[N][N];
int main()
{
	int i,j,b,c,d,e,k,z,t,x,y;
	char ch;
	cin>>n>>m;
	t=0;
	while(n!=0 && m!=0)
	{
		t++;
		ans=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			cin>>a[i][j];
		for(k=0;k<n;k++)
			for(z=0;z<m;z++)
				if(a[k][z]=='A')
				{
					p1.x=k;
					p1.y=z;
					p1.dist=1;
					q.push(p1);
					while(!q.empty())
					{
						x=q.front().x;
						y=q.front().y;
						mark[x][y]=true;
						ans=max(ans,q.front().dist);
						for(i=1;i<=8;i++)
						{
							if(x+px[i]<n && x+px[i]>=0 && y+py[i]<m && y+py[i]>=0 && int(a[x+px[i]][y+py[i]])==int(a[x][y])+1 && mark[x+px[i]][y+py[i]]<8)
							{
								p1.x=x+px[i];
								p1.y=y+py[i];
								mark[x+px[i]][y+py[i]]++;
								p1.dist=q.front().dist+1;
								q.push(p1);
							}
						}
						q.pop();
					}
				}
		cout<<"Case "<<t<<": "<<ans<<endl;
		cin>>n>>m;
	}
	
	return 0;
}



					



