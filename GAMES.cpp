    #include<cstdio>
    #include<cmath>
    #include<algorithm>
    #include<iostream>
    using namespace std;
    long long gcd(long long a,long long b)
    {
    	if(b==0)
    	return a;
    	else
    	return (b,a%b);
    }
    int main()
    {
    	long long t;
    	cin>>t;
    	while(t--)
    	{	
    	string s;
    	long long p,c=0,len,i,res,k;
    	cin>>s;
    	p=s.length();
    	for(i=0;i<p;i++)
    	{
    		if(s[i]=='.')
    		break;
    	}
    	//cout<<i<<" "<<p<<endl;
    	if(i==p)
    	{
    	cout<<1<<endl;continue;
    	}
    	len=p-i-1;
    	for(k=i+1;k<p;k++)
    	{
    		res=s[k]-'0';
    		c=c*10+res;
    	}
    	long long ten=pow(10,len);
    	//cout<<c<<" "<<ten<<endl;
    	long long div=__gcd(c,ten);
    	//cout<<div<<endl;
    	cout<<ten/div<<endl;
    	}
    } 
