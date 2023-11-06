#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cur = 1, ans = 1;

    while(cur < N) {
        cur *= 2;
        ans++;
    }

    cout << ans << "\n";
}
