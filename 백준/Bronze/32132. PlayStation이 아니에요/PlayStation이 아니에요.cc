#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; string s; cin >> n >> s;

    string ans = "";

    for(int i=0; i<n; i++) {
        if(ans.length() >= 2 && ans.substr(ans.length()-2, 2) == "PS" && (s[i] == '4' || s[i] == '5')) continue;

        ans += s[i];
    }

    cout << ans << "\n";
}
