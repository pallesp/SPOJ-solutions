#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;
int table[10][4]={{0,0,0,0},
		 {1,1,1,1},
		 {6,2,4,8},
		 {1,3,9,7},
		 {6,4,6,4},
		 {5,5,5,5},
		 {6,6,6,6},
		 {1,7,9,3},
		 {6,8,4,2},		
		 {1,9,1,9},	
		};
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,n;
	string s;
	cin>>s>>b;
	if(b==0)
	{
	cout<<"1\n";
	}
	else
	{
	n=s.length()-1;
	a=s[n]-'0';
	b=b%4;
	
        printf("%d\n",table[a%10][b]);
	}
    }
    return 0;
}
 
