    #include<stdio.h>
     
    long long int gcd(long long int a, long long int b)
    {
        if (a<b)
            return gcd(b,a);
     
        if (b==0)
            return a;
     
        else 
                return gcd (b,a%b);
    }
     
    long long int lcm(long long int a,long long int b)
    {
        return (a*b)/gcd(a,b);
    }    
     
    int main()
    {
        char c;
        long long int count, k, i ,j;
        
        while(1)
        {
            count=0;
            k=1;
            i = 0;
            int toCheck[21];
            scanf("%c",&c);
            while(c!='\n' && c!='*')
            
            {
                count++;
                        
                if (c=='Y')
                {
                    k= lcm(k,count);
                }
                else if(c=='N')
                {
                    toCheck[i++]  = count;        
                }    
                scanf("%c",&c);
                    
            }
            
            for(j = 0 ; j< i ; j++)
            {
                if(k%toCheck[j]==0)
                    {
                        k=-1;
                        break;
                    }
            }
            if(c=='*')
                break;
            printf("%lld\n",k);
            
        }
        return 0;
    }
     
