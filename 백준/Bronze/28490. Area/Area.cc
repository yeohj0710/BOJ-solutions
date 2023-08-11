#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int a, b; cin >> a >> b;

        ans = max(ans, a * b);
    }

    cout << ans << "\n";
}
