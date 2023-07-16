#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    if(N == 0) {
        cout << 0 << "\n";
        return 0;
    }

    int x = 1, ans = 1;

    while(x < N) {
        x *= 2;
        ans++;
    }

    cout << ans << "\n";
}
