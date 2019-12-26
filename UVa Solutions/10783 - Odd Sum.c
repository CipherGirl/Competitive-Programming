#include<stdio.h>
int main()
{
    int x,m,n,i,j,sum;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        sum=0;
        scanf("%d%d",&m,&n);
        for(i=m;i<=n;i++)
        {
            if(i%2!=0)
                sum+=i;
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
