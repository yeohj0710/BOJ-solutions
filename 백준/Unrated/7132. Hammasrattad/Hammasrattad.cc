#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    unordered_map<int, unordered_map<int, bool>> m;

    int ans = 0;

    for(int i=a; i<=b; i++)
        for(int j=a; j<=b; j++) {
            int x = i, y = j, gcd = __gcd(x, y);

            x /= gcd, y /= gcd;

            if(!m[x][y]) ans++;

            m[x][y] = true;
        }

    cout << ans << "\n";
}
