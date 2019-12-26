#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[80];
    int i,j,x,sum,c;
    scanf("%d\n",&x);
    while(x--)
    {
        sum=0;c=0;
        gets(s);
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='O')
            {
                sum+=c;
                sum++;
                c++;
            }
            else if(s[i]=='X')
                c=0;
        }
        printf("%d\n",sum);
    }
    return 0;
 }
