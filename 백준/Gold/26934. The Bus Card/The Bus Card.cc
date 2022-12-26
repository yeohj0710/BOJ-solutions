#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    N = ((N - 1) / 100 + 1) * 100;

    int ans = N / 500;

    N %= 500;

    ans += N / 200;

    N %= 200;

    ans += N / 100;

    cout << ans << "\n";
}
