#include<stdio.h>
int main()
{
    int i,j,n[21],m,x,t;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&n[i]);
        }
        for(i=0;i<m-1;i++)
        {
            for(j=i+1;j<m;j++)
            {
                if(n[i]>n[j])
                {
                    t = n[i];
                    n[i] = n[j];
                    n[j] = t;
                }
            }
        }
    printf("%d\n",(n[m-1]-n[0])*2);
    }
}
