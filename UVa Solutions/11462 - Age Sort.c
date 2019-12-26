#include<stdio.h>
#include<stdlib.h>
long long int c[110];
int main()
{
    long long int x,i,j,t,n,k;

    while(scanf("%lld",&x) &&x)
    {
        for(i=1;i<=x;i++){
            scanf("%lld",&n);
            ++c[n];
        }
        k=1;
        for(i=1;i<=100;i++){
            if(c[i]>0)
                for(j=1;j<=c[i];j++)
            {
                if(k==x)
                    printf("%lld\n",i);
                else
                {
                    printf("%lld ",i);
                    k++;
                }
            }
            c[i]=0;
            }
        }

    return 0;
}
