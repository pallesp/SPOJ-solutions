#include<set>
#include<stack>
#include<queue>
#include<vector>
#include<cstdio>
#include<cmath>
#include<deque>
#include<climits>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<iostream>
#include<algorithm>
//#include<sai>   tHe lAzY PrOgRmMeR :)
#define rl(T) scanf("%lld",&T)
#define ri(T) scanf("%d",&T)
#define rs(T) scanf("%s",T)
#define loop(i,n) for(long long i=0;i<n;i++)
#define loopn(i,n) for(long long i=1;i<=n;i++)
#define ll long long int
char digits[100000000];
using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
void findNext(char number[], int n)
{
    int i, j;
    for (i = n-1; i > 0; i--)
        if (number[i] > number[i-1])
           break;
    if (i==0)
    {
        cout <<"-1\n";
        return;
    }
    int x = number[i-1], smallest = i;
    for (j = i+1; j < n; j++)
        if (number[j] > x && number[j] < number[smallest])
            smallest = j;
    swap(&number[smallest], &number[i-1]);
    sort(number + i, number + n);
    cout<<number<<endl;
 
    return;
}
int main()
{
	ll t;	
	rl(t);
	while(t--)
	{
		ll n1;
		rl(n1);
		memset(digits,0,sizeof digits);
		for(ll i=0;i<n1;i++)
		{
			cin>>digits[i];
		}
		//printf("%s\n",digits);
   		ll n = strlen(digits);
   		findNext(digits, n);
	}
    return 0;
} 
