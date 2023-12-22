#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    if(x1 > x2) swap(x1, x2);
    if(y1 > y2) swap(y1, y2);

    int ans = (min(x2 - x1, x1 + N - x2) + min(y2 - y1, y1 + M - y2) + 1) / 2;

    cout << ans << "\n";
}
