#include <bits/stdc++.h>
using namespace std;

long summation (long n) {
    return n*(n+1)/2;
}

int main(){

    long input, ans=0, test;
    cin>>test;

    while(test--){
        ans = 0;
        cin>>input;
        input--;
        ans = 3 * summation(input/3) + 5 * summation(input/5) - 15 * summation(input/15);
        cout<<ans<<endl;
    }

    return 0;
}
