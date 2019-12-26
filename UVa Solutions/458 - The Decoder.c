#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char s[10000];
    while(gets(s))
    {
        for(i=0;i<strlen(s);i++)
        {
            s[i] = s[i]-7;
        }
        puts(s);
    }
    return 0;
}
