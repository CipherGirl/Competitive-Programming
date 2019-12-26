
#include <stdio.h>
#include <string.h>
int dig;
int split(int n)
{
    dig=0;
    if(n<10)
        return n;
    while(n!=0)
    {
        dig+=n%10;
        n/=10;
    }
    return split(dig);
}

int main()

{
    int n;
    while(scanf("%d",&n) && n)
    {
        printf("%d\n", split(n));
    }

    return 0;

}
