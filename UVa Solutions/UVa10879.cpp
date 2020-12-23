#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int k;
        cin >> k;
        vector <int> v;
        int cnt = 0;
        for(int i = 2; i <= k; i++) {
            if(k % i == 0) {
                v.push_back(i);
                v.push_back(k / i);
                cnt += 2;
            }
            if(cnt == 4)
                break;
        }
        printf("Case #%d: %d = %d * %d = %d * %d\n", t, k, v[0], v[1], v[2], v[3]);

    }

    return 0;
}

