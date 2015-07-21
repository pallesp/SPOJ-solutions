#include <stdio.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    int n;
    unsigned long long int t, sol;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%llu",&t);
        sol = t * (t + 1) / 6;
        sol = floor(sol);
        printf("%llu\n", sol);
    }
    return 0;
}
 
