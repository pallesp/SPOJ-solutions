    #include<cstdio>
    #include<cstring>
    #include<vector>
    using namespace std;
    #define MAX 150
    #define ll long long
    #define rl(x) scanf("%d",&x)
    int t,c,u,v,e,m,n,w;
    int main()
    {
    	//rl(t);
    	//while(t--)
    	{
    		c=0;
    		rl(n);rl(e);rl(t);rl(m);
    		int G[n+1][n+1];
    		for(int i=1;i<=n;i++)
    		{
    		      for(int j=1;j<=n;j++)
    			if(i==j)
    			G[i][j]=0;
    			else
    			G[i][j]=32765;
    		}
    		for(int i=1;i<=m;i++)
    		{
    		
    			rl(u),rl(v),rl(w);
    			G[u][v]=w;
    		}
    	
    		for(int k=1;k<=n;k++)
    		   for(int i=1;i<=n;i++)
    		      for(int j=1;j<=n;j++)
    			G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
     
    	
    		for(ll i=1;i<=n;i++)
    		{
    			if(G[i][e]<=t)
    			c++;
    		}
    		printf("%d\n",c);
    	}
    } 

