#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int R, C, W; cin >> R >> C >> W;

        cout << R * (C / W) + (W - 1) + bool(C % W) << "\n";
    }
}
