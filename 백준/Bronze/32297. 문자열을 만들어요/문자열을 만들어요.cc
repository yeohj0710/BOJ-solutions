#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    string s; cin >> s;

    bool chk = false;

    for(int i=0; i<s.length(); i++) {
        if(i + 4 > s.length()) break;

        if(s.substr(i, 4) == "gori") chk = true;
    }

    if(chk) cout << "YES\n";
    else cout << "NO\n";
}
