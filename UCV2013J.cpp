#include <stdio.h>
#include <math.h>
 
int main()
{
    int n, c, s, t, i, l;
    scanf("%d", &n);
    while (n!=0) 
    {
        s=1;
        while (s-1<n) {
            
            s*=2;
        }
        s/=2;
        s--;
        s-=(s/2-(n-s-1)/2);
        for (i=0; i<s; i++) {
            scanf("%d", &c);
        }
        t=0;
        for (i=s; i<n; i++) {
            scanf("%d", &c);
            t+=c;
        }
        printf("%d\n",t);
        scanf("%d", &n);
    }
    return 0;
} 
