#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    char n[10];
    scanf("%d\n",&x);
    while(x--)
    {
        gets(n);
        if(strlen(n)==5)
            printf("3\n");
        else
        {
            if(n[0]=='o' && (n[1]=='n' || n[2]=='e'))
                printf("1\n");
            else if(n[1]=='n' && (n[0]=='n' || n[2]=='e'))
                printf("1\n");
            else if(n[2]=='e' && (n[1]=='n' || n[0]=='o'))
                printf("1\n");
            else if(n[0]=='t' && (n[1]=='w' || n[2]=='o'))
                printf("2\n");
            else if(n[1]=='w' && (n[0]=='t' || n[2]=='o'))
                printf("2\n");
            else if(n[2]=='o' && (n[1]=='w' || n[0]=='t'))
                printf("2\n");
        }
    }
    return 0;
}
