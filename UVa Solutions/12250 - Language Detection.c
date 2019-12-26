#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int no=0;
    while(gets(s))
    {
        if(strcmp(s,"#")==0)
            break;
        else if(strcmp(s,"HELLO")==0)
            printf("Case %d: ENGLISH\n",++no);
        else if(strcmp(s,"HOLA")==0)
            printf("Case %d: SPANISH\n",++no);
        else if(strcmp(s,"HALLO")==0)
            printf("Case %d: GERMAN\n",++no);
        else if(strcmp(s,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",++no);
        else if(strcmp(s,"CIAO")==0)
            printf("Case %d: ITALIAN\n",++no);
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",++no);
        else
            printf("Case %d: UNKNOWN\n",++no);
    }
    return 0;
}
