#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string s; cin >> s;

    int ans = 0;

    for(int i=0; i<n/2; i++) {
        if(s[i] == '?' && s[n-1-i] == '?') {
            ans += 26;
        }
        else if(s[i] == '?' || s[n-1-i] == '?') {
            ans++;
        }
        else if(s[i] != s[n-1-i]) {
            cout << 0 << "\n";
            return 0;
        }
    }

    cout << ans << "\n";
}
