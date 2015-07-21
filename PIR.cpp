#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define rl(x) scanf("%lf",&x)
int main()
{
	ll t;
	cin>>t;
	while(t--)	
	{
		double u,v,w,u1,v1,w1,U,V,W,vol;
		cin>>u>>v>>w>>W>>V>>U;
		u1=v*v+w*w-U*U;
		v1=u*u+w*w-V*V;
		w1=v*v+u*u-W*W;
		vol=(sqrt(4*u*u*v*v*w*w - u*u*u1*u1 - v*v*v1*v1 - w*w*w1*w1 + u1*v1*w1))/12.0;
		printf("%.4lf\n",vol);
	}
}
