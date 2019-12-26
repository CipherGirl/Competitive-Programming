#include<stdio.h>
#include<math.h>
int main()
{
    int n[3001],d[3000],t=0,i,j,x,flag;
    while(scanf("%d",&x)!=EOF)
    {
        flag=1;t=0;
        for(i=0;i<x;i++)
            scanf("%d",&n[i]);
        for(i=0;i<x-1;i++)
            d[i] = abs(n[i+1]-n[i]);
        for(i=0;i<x-2;i++)
        {
            for(j=i+1;j<x-1;j++)
            {
                if(d[i]>d[j])
                {
                    t=d[i];
                    d[i]=d[j];
                    d[j]=t;
                }
            }
        }

        for(i=0;i<x-2;i++)
        {
            if(d[i+1]-d[i]!=1)
            {
                flag=0;
                break;
            }
        }

        if(flag==0 || (d[0]!=1&&x!=1))
            printf("Not jolly\n");
        else if(flag==1)
            printf("Jolly\n");

    }
    return 0;
}
