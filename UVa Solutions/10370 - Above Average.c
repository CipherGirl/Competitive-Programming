#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int c,n,N[1001],i,sum;
    double avg,m;
    scanf("%d",&c);
    while(c--)
    {
        avg =0; sum=0; m=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&N[i]);
            sum+=N[i];
        }
        avg = (float)sum/n;
        for(i=0;i<n;i++)
        {
            if (N[i]>avg)
                ++m;
        }
        printf("%.3f%%\n",m/n*100);
    }
    return 0;
}
