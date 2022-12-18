#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    int ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        ans += x;
    }

    cout << ans << "\n";
}
