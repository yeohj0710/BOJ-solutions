#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v;
    int x = 1;

    while(x <= 1e18) {
        x *= 2;
        v.push_back(x - 1);
    }

    int T; cin >> T;

    while(T--) {
        int y; cin >> y;

        int ans = -1;

        for(int i=v.size()-1; i>=0; i--) {
            ans += y / v[i];
            y %= v[i];
        }

        cout << ans << "\n";
    }
}
