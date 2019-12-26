#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int c,x,i,j=1,n;
    while(scanf("%d",&x) && x)
    {
        c=0;
        for(i=0;i<x;i++)
        {
            scanf("%d",&n);
            if(n==0)
                c--;
            else
                c++;
        }
        printf("Case %d: %d\n",j,c);
        j++;
    }
    return 0;
 }
