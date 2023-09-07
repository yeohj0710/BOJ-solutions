#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int b = 1, e = 1234567890123, n = 1234567890123;

    int N; cin >> N;

    while(N--) {
        int Q, x; cin >> Q;

        if(Q != 3) cin >> x;

        if(Q == 0) b += x, e += x;
        else if(Q == 1) b *= x, e *= x;
        else if(Q == 2) b = e - (e - b) / (n - 1) * (n - 1 - x), n -= x;
        else cout << b << "\n";
    }
}
