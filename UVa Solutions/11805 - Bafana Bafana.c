
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int T,t,i,j,n,k,p,r;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        scanf("%d %d %d",&n,&k,&p);
        if(p>=n && p%n==0)
            printf("Case %d: %d\n",t,k);
        else if(p>n && p%n!=0)
        {
            r=p%n;
            r=k+r;
            if(r>n)
                r=r-n;
            printf("Case %d: %d\n",t,r);
        }
        else
        {
            r= p+k;
            if(r>n)
                r=r-n;
            printf("Case %d: %d\n",t,r);
        }
    }

    return 0;
}
