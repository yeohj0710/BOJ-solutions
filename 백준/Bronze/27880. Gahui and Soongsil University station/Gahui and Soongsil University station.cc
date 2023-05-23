#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int ans = 0;

    for(int i=0; i<4; i++) {
        string str; int x; cin >> str >> x;

        ans += ((str == "Es") ? 21 : 17) * x;
    }

    cout << ans << "\n";
}
