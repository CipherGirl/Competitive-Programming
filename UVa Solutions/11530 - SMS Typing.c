#include<stdio.h>
#include<string.h>
#include<ctype.h>
int i,j;
int letter[123];
int numpad()
{
    for(i='a';i<='p';)
     {
         letter[i]=1;
         letter[i+1]=2;
         letter[i+2]=3;
         i=i+3;
     }
     letter['s']=4;letter['t']=1;letter['u']=2;letter['v']=3;letter['w']=1;letter['x']=2;letter['y']=3;letter['z']=4;letter[' ']=1;
}
 int main()
 {
     int x,n,sum;
     char text[101];
     numpad();
     scanf("%d",&x);
     getchar();
     for(i=1;i<=x;i++)
     {
         sum=0;
         gets(text);
         n=strlen(text);
         for(j=0;j<n;j++)
         {
            sum+=letter[text[j]];
         }
         printf("Case #%d: %d\n",i,sum);
     }

 return 0;
 }
