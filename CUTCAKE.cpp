#include<stdio.h>
#include<cmath>
//#include<conio.h>
int main()
{
   long long t,n,res;
    double root;
    scanf("%lld",&t);
    while(t--)
    {
	
        scanf("%lld",&n);
	if(n==1)
	printf("0\n");
	else if(n==2)
	printf("1\n");
	else
	{
	n--;
        res=(long long int)floor(0.5+sqrt(2*n));
        printf("%lld\n",res); 
	} 
    }
    return 0;
} 
