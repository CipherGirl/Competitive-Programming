
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int n;
    double r;
    while(scanf("%lld",&n) && n)
    {
        r = sqrt(n);
        if(r>(int)r)
        {
            printf("no\n");
        }
        else
            printf("yes\n");
    }
    return 0;
}
