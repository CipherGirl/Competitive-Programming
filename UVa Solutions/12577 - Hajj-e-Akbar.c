#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int no=0;
    while(gets(s))
    {
        if(strcmp(s,"*")==0)
            break;
        else if(strcmp(s,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++no);
        else if(strcmp(s,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",++no);
    }
    return 0;
}
