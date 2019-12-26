#include<stdio.h>
#include<string.h>

int main()
{
    int letter[53],i,j,value,sum,flag;
    char word[21];
    for(i=1,value=97;i<=52;i++)
        {
            letter[i] = value++;
            if(i==26)
                value=65;
        }

    while(gets(word))
    {
        sum=0;
        flag=0;
        for(i=0;i<strlen(word);i++)
        {
            for(j=1;j<=52;j++)
            {
                if(word[i]==letter[j])
                    sum+=j;
            }
        }

        for(i=2; i<=sum/2; ++i)
        {
            if(sum%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
        }
    return 0;
}
