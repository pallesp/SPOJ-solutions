#include<stdio.h>
#define gc getchar_unlocked
inline int scanint() 
{
	char c = gc();
	while(c<'0' || c>'9') 
		c = gc();
	int ret = 0;
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - 48;
		c = gc();
	}
	return ret;
}
int main()
{
	int t;
	//scanf("%d",&t);
	t=scanint();
	while(t--)
	{
		int a[1000];
		int n,m=1,temp=0,i,j,x;
		n=scanint();
		a[0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<m;j++)
			{
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
			}
			while(temp>0)
			{
				a[m]=temp%10;
				temp/=10;
				m++;
			}
			
		}
		for(i=m-1;i>=0;i--)
		printf("%d",a[i]);
		printf("\n");
	}
} 
