#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    if(s.length() > n) {
        cout << "Impossible\n";
        return 0;
    }

    int ans = 0;

    for(int i=0; i<s.length(); i++) {
        ans += s[i] - 'a' + 1;
    }

    cout << ans << "\n";
}
