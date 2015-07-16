    #include<cstdio>
    #include<iostream>
    #include<algorithm>
    #include<vector>
    #define ll long long
    #define rl(x) scanf("%lld",&x)
    using namespace std;
    struct Point {
       int x;
       int y;
       Point(int _x, int _y) : x(_x) , y(_y) {}
    };
    bool cmp(const Point &p1, const Point &p2){
        if(p1.y == p2.y)
            return p1.x < p2.x;
        return p1.y < p2.y;
    }
    int main()
    {
    	ll t,x,y,n;
    	rl(t);
    	while(t--)
    	{
    		ll prev,c=1;
    		rl(n);
    		vector<Point>v;
    		for(ll i=0;i<n;i++)
    		{
    		rl(x),rl(y);
    		v.push_back(Point(x, y));
    		}
    		sort(v.begin(),v.end(),cmp);
    		prev=v[0].y;
    		for(ll i=1;i<n;i++)
    		{
    			if(prev<=v[i].x)
    			{
    			c++;
    			prev=v[i].y;
    			}	
    		}
    		cout<<c<<endl;
    	}
    	
    } 
