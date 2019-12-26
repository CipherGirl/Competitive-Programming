#include <stdio.h>
#include<string.h>
void print_reverse(char str[])
{
    int i;
    for(i=strlen(str)-1;i>=0;i--)
    {
        printf("%c", str[i]);
    }
}
int main()
{
    int i,t,j,k;
    char s[1002],w[1002];
    while(scanf(" %[^\n]",s)!=EOF)
    {
        for(j=0,k=0;j<strlen(s);j++)
        {
            if( s[j]!=' ')
            {
                w[k++] = s[j];
            }
            else if (k>0)
            {
                w[k] = '\0';
                print_reverse(w);
                printf(" ");
                k=0;
            }
        }
        if (k>0)
        {
            w[k]='\0';
            print_reverse(w);
        }
        printf("\n");
    }
    return 0;
}
