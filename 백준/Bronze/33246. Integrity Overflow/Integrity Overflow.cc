#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    bool chk = true;

    string ss; cin >> ss;

    while(n--) {
        string s, r; cin >> s >> r;

        if(ss.length() != s.length()) {
            if(r == "ALLOWED") chk = false;

            continue;
        }

        int cnt = 0;

        for(int i=0; i<s.length(); i++)
            if(s[i] != ss[i]) cnt++;

        if(cnt > 1 && r == "ALLOWED") chk = false;
        if(cnt == 0 && r == "DENIED") chk = false;
    }

    if(chk) cout << "SYSTEM SECURE\n";
    else cout << "INTEGRITY OVERFLOW\n";
}
