#include<stdio.h>
#include<string.h>
int main()
{
    char text[19];
    int i,j,sum,s1,s2,x,k,number[16];
    scanf("%d",&x);
    getchar();
    while(x--)
    {
        sum=0;s1=0;s2=0,j=0;
        gets(text);
        for(i=0;i<19;i++)
        {
            if(text[i]!=' ')
            number[j++]=text[i]-48;
        }
        for(i=0;i<16;i++)
        {
            if(i%2==0)
            {
                k=number[i]*2;
                if(k>9)
                    s1+=(k/10+k%10);
                else
                    s1+=k;
            }
            else if(i%2!=0)
                s2+=number[i];
        }
        sum=s1+s2;
        if(sum%10==0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
