#include <stdio.h>
#include <string.h>
int main()
{
    long int i,T,n,a,b,c,check,max;
    scanf("%ld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a<=0 || b<=0 || c<=0)
            printf("Case %ld: Invalid\n",i);
        else
        {
            max=a;
            if(b>max)
                max=b;
            if(c>max)
                max=c;
            check=a+b+c-max;
            if(check<=max)
                printf("Case %ld: Invalid\n",i);
            else if(a==b && b==c)
                printf("Case %ld: Equilateral\n",i);
            else if(a==b || b==c || a==c)
                printf("Case %ld: Isosceles\n",i);
            else if(a!=b || b!=c)
                printf("Case %ld: Scalene\n",i);
        }
    }
    return 0;
}
