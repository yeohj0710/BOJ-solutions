#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a, b, c, d; cin >> a >> b >> c >> d;

    int ans = max(min(N - a, d) - max(N - b, c) + 1, (int)0);

    cout << ans << "\n";
}
