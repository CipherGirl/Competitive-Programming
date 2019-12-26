#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld",&a,&b);
        if(a==b)
            printf("=\n");
        else if(a>b)
            printf(">\n");
        else
            printf("<\n");
    }
    return 0;
}
