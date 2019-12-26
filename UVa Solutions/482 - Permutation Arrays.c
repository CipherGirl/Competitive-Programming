#include<stdio.h>
#include<string.h>
struct output
{
    int index;
    char number[50];
};
int main()
{
    struct output out[1000],temp;
    char num[100],ch,sp;
    int i,j,k,n,t;
    scanf("%d",&t);


    while(t--)
    {
        getchar();
        getchar();
        j=0,k=0;

        while(1)
        {
            scanf("%d%c", &n, &ch);
            out[j++].index=n;
            if(ch=='\n')
                break;
        }
        for(i=0;i<j;i++)
        {
            scanf("%s",out[i].number);
        }

        for(i=0;i<j-1;i++)
        {
            for(k=i+1;k<j;k++)
                if(out[i].index>out[k].index)
            {
                temp = out[i];
                out[i]=out[k];
                out[k]=temp;
            }
        }
        for(i=0;i<j;i++)
        {
            printf("%s\n",out[i].number);
        }
        if(t!=0)
        printf("\n");
    }
    return 0;
}
