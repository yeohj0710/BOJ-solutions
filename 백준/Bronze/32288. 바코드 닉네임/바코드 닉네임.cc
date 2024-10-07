#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    string s; cin >> s;

    string ans = "";

    for(int i=0; i<n; i++) {
        if(s[i] == 'I') ans += 'i';
        else ans += 'L';
    }

    cout << ans << "\n";
}
