#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int a, b, x; cin >> a >> b >> x;

        cout << a * (x - 1) + b << "\n";
    }
}

