#include<stdio.h>
int main()
{
    int x,n,N[12],i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&N[j]);
        }
        printf("Case %d: %d\n",i,N[(n/2)]);
    }
    return 0;
}
