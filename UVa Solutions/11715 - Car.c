#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int j=1;
    double a,b,c,t,r1,r2,i,n;
    while(scanf("%lf",&t)&& t)
    {
        scanf("%lf %lf %lf",&a,&b,&c);
        if(t==1)
        {
            r1= (b-a)/c;
            r2= (a*c)+(0.5*r1*c*c);
            printf("Case %d: %.3f %.3f\n",j++,r2,r1);

        }
        else if(t==2)
        {
            r1= (b-a)/c;
            r2= (a*r1)+(0.5*c*r1*r1);
            printf("Case %d: %.3f %.3f\n",j++,r2,r1);

        }
        else if(t==3)
        {
            r1= sqrt((a*a)+(2*b*c));
            r2= (r1-a)/b;
            printf("Case %d: %.3f %.3f\n",j++,r1,r2);

        }
        else
        {
            r1= sqrt((a*a)-(2*b*c));
            r2= (a-r1)/b;
            printf("Case %d: %.3f %.3f\n",j++,r1,r2);

        }
    }
    return 0;
 }
