#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    int ans = 0;

    for(int i=0; i<N; i++) {
        int x = abs(a[i] - b[i]);

        ans += min(x, 26 - x);
    }

    cout << ans << "\n";
}
