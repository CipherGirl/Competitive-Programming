#include<stdio.h>

int cycle(int x)
{
    int i=1;
    while(x!=1)
        {
            if(x%2==0)
                x=x/2;
            else
                x = 3*x +1;
            i++;
        }
        return i;
}

int main()
{
    int i,j,max=0,k,t;
    while(scanf("%d%d",&i,&j)==2)
    {
    max = 0;
    printf("%d %d ",i,j);
    if(i>j)
    {
        t=i;
        i=j;
        j=t;
    }
    for(k=i;k<=j;k++)
    {
        if(cycle(k)>max)
            max = cycle(k);
    }
    printf("%d\n",max);
    }
    return 0;
}
