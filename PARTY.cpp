#include<iostream>
#include<cstdio>
#include<cstdio>
using namespace std;
void knapSack(int W, int wt[], int val[], int n)
{
   	int i, w;
   	int K[n+1][W+1];
   	for (i = 0; i <= n; i++)
   	{
   	    for (w = 0; w <= W; w++)
   	    {
   	        if (i==0 || w==0)
   	            K[i][w] = 0;
   	        else if (wt[i-1] <= w)
   	              K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
                else
                 K[i][w] = K[i-1][w];
       	    }
   	}
	int m=0,ind =0;
  	for(int i=1;i<=W;i++)
	if(m<K[n][i])
	{
		m=K[n][i];
		ind=i;
	}
	cout<<ind<<" "<<m<<endl;
}
 
int main()
{
   
   	int n,W ;
	cin>>W>>n;
	while(W!=0 && n!=0)
	{
		
		int val[n];
    		int wt[n];
  		for(int i=0;i<n;i++)
		{
			cin>>wt[i]>>val[i];
		}
		knapSack(W, wt, val, n);
		cin>>W>>n;
	}
    	return 0;
} 
