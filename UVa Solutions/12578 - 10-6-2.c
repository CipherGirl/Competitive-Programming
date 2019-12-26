#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int t,l;
    double w,r,pi,a_r,a_c;
    pi = acos(-1);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        w = l*0.6;
        r = l*0.2;
        a_c = pi*r*r;
        a_r = (w*l)-a_c;
        printf("%.2f %.2f\n",a_c,a_r);
    }
    return 0;
}

