#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, a, b; cin >> N >> a >> b;

        bool b1 = false, b2 = false;

        if(a == 1 || a == N) b1 = true;
        if(b == 1 || b == N) b2 = true;

        if(b1 && b2) {
            cout << 0 << "\n";

            continue;
        }

        if(b1 || abs(a - b) == 1) {
            cout << 1 << "\n";

            continue;
        }

        cout << 2 << "\n";
    }
}
