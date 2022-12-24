#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int ans = 0, Max = 0;

    if(min(N+8, (int)210) >= Max) {
        Max = min(N+8, (int)210);
        ans = 1;
    }

    if(min(N+4, (int)220) >= Max) {
        Max = min(N+4, (int)220);
        ans = 2;
    }

    if(min(N+2, (int)230) >= Max) {
        Max = min(N+2, (int)230);
        ans = 3;
    }

    if(min(N+1, (int)240) >= Max) {
        Max = min(N+1, (int)240);
        ans = 4;
    }

    cout << ans << "\n";
}
