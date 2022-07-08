#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> v(10001, true);

    for(int i=1; i<=10000; i++) {
        int x = i;

        while(x <= 10000) {
            int y = x;

            while(x > 0) {
                y += x % 10;
                x /= 10;
            }

            v[y] = false;
            x = y;
        }
    }

    for(int i=1; i<=10000; i++)
        if(v[i]) cout << i << "\n";
}
