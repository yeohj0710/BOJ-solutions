#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int mn = INT_MAX, mx = INT_MIN;

    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;

        mn = min(mn, y);
        mx = max(mx, y);
    }

    cout << mx - mn << "\n";
}
