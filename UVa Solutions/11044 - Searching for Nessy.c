#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int x,n,m;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d%d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
 }
