#include<stdio.h>

int main()
{
    int i,I,T,n[51],h,l,x;
    scanf("%d",&x);
    for(I=1;I<=x;I++)
    {
        h=0;l=0;
        scanf("%d",&T);
        for(i=0;i<T;i++)
            scanf("%d",&n[i]);
        for(i=0;i<T-1;i++)
        {
            if(n[i+1]>n[i])
                h++;
            else if(n[i+1]<n[i])
                l++;
        }
        printf("Case %d: %d %d\n",I,h,l);
    }
    return 0;
}
