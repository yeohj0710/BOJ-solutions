#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, y, r; cin >> x >> y >> r;

    unordered_map<int, unordered_map<int, bool>> m;
    m[x][y] = true;

    int ans = 1;

    while(true) {
        if(x + y + 2 < r) x++, y++;
        else x /= 2, y /= 2;

        if(m[x][y]) break;

        m[x][y] = true;
        ans++;
    }

    cout << ans << "\n";
}
