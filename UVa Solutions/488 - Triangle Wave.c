#include<stdio.h>

int main()
{
    int x, m,n,o=0,i,j;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d%d",&m,&n);

        while(n--){
        for(i=1;i<=m;i++){
            for(j=0;j<i;j++){
                printf("%d",i);}
            printf("\n");
        }
        for(i=m-1;i>=1;i--){
            for(j=0;j<i;j++){
                printf("%d",i);}
            printf("\n");
        }
        if(n>=1||x>=1)
            printf("\n");
        }

    }
    return 0;
}
