#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int ans = 0;

    while(n--) {
        string s; cin >> s;

        if(s[0] == 'C') ans++;
    }

    cout << ans << "\n";
}
