#include<iostream>
#include<stdio.h>
using namespace std;
bool isPower(unsigned long long int i)
{
 if(i==0)
 return 0;
 else
 return !(i&(i-1));
}
int main()
{
 unsigned long long int i;
 scanf("%lld",&i);
 isPower(i)?printf("TAK\n"):printf("NIE\n");
 return 0;
}
 
