#include<stdio.h>
#include<string.h>
int main()
{
    long int T,val,m,n,i,j,k,len,v[200];
    double price;
    char s[10000],w[200];
    scanf("%d",&T);
    while(T--)
    {
        price = 0;
        scanf("%ld\n",&n);
        for(i=0;i<n;i++)
        {
            scanf("%c%ld\n",&w[i],&v[i]);
        }
        scanf("%ld\n",&m);
        for(k=0;k<m;k++)
        {
            gets(s);
            for(j=0;j<strlen(s);j++)
            {
                for(i=0;i<n;i++)
                {
                    if(s[j]==w[i])
                    price+=v[i];
                }
            }
        }
    printf("%.2lf$\n",price/100);
    }
    return 0;
}
