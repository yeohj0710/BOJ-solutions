#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int ans = 0, cnt = 0;

    vector<int> v(26);

    while(true) {
        int x; cin >> x;

        if(x == -1) break;

        char ch; string str; cin >> ch >> str;

        if(str == "wrong") {
            v[ch - 'A']++;
            continue;
        }

        ans += v[ch - 'A'] * 20 + x;
        cnt++;
    }

    cout << cnt << " " << ans << "\n";
}
