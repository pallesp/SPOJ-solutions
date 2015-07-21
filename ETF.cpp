#include<iostream>
using namespace std;
long long phi(long long n) 
     { 
       long  long result = n; 
       for(long  long i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) result -= result / i; 
         while (n % i == 0) n /= i; 
       } 
       if (n > 1) result -= result / n; 
       return result; 
     } 
int main()
{
	long long t,n;
	cin>>t;	
	while(t--)
	{
		cin>>n;
		cout<<phi(n)<<endl;
	}
} 
