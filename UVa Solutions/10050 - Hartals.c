#include<stdio.h>
#include<string.h>
int days[3651];
int main()
{
    int T,p[101],t,i,j,n,m,c,r;

    scanf("%d",&T);
    while(T--)
    {
        c=0;

        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&p[i]);
            for(j=p[i];j<=n;j+=p[i]){
                if(days[j]==0 && j%7!=6 && j%7!=0)
                    {
                        c++;
                        days[j]=1;
                    }
            }
        }
        printf("%d\n",c);
        for(i=0;i<=n;i++)
            days[i]=0;
    }
    return 0;
}
