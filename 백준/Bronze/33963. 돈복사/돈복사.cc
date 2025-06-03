#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int m = n, ans = 0;

    while(true) {
        m *= 2;

        if(to_string(m).length() != to_string(n).length()) break;

        ans++;
    }

    cout << ans << "\n";
}
