#include<stdio.h>
#include<string.h>
int main()
{
    int x,l,h,w,no=0;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d%d%d",&l,&h,&w);
        if(l<=20 && h<=20 && w<=20)
            printf("Case %d: good\n",++no);
        else
            printf("Case %d: bad\n",++no);
    }
    return 0;
}
