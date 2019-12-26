#include <stdio.h>
#include <string.h>

int main()

{
    int T,t,l[51],i,j,k,temp,c;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&t);
        for(k=0;k<t;k++)
            scanf("%d",&l[k]);
        c=0;
        for(i=0;i<t-1;i++)
        {
            for(j=i+1;j<t;j++)
            {
                if(l[i]>l[j])
                {
                    temp=l[i];
                    l[i]=l[j];
                    l[j]=temp;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
