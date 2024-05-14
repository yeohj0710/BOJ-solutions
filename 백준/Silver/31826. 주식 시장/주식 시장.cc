#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<int, int> m;

    int ans = 10000;

    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        b *= c;

        if(b * m[a] < 0) ans = a;

        m[a] += b;
    }

    cout << ans << "\n";
}
