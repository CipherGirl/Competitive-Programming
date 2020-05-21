#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d", &n)) {
        if(n == 0)
            break;
        /*
        int ans = 0;
        while(n >= 3) {
            ans += (n / 3) + (n % 3);
            n = n / 3;
        }
        */
        printf("%d\n", n / 2);
    }
    return 0;
}

