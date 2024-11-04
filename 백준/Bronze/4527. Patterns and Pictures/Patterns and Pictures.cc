#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int tot = 0;

        for(int i=0; i<n; i++) {
            int a, b; cin >> a >> b;

            tot += a * b;
        }

        cout << 36 * 36 / tot << " " << 36 * 36 * 2 / tot << " " << 36 * 36 * 3/ tot << "\n";
    }
}
