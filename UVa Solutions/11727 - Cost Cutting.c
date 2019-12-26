#include<stdio.h>
#include<string.h>
int main()
{
    int n=3,i,j,max,x,no=0,p[3];
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d%d%d",&p[0],&p[1],&p[2]);
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<3;j++)
            {
                if(p[i]>p[j])
                {
                    max = p[i];
                    p[i] = p[j];
                    p[j] = max;
                }
            }
        }
        printf("Case %d: %d\n",++no,p[1]);
    }
    return 0;
}
