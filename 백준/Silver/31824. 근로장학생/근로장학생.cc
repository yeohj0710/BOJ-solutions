#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    unordered_map<string, string> m;

    while(N--) {
        string s1, s2; cin >> s1 >> s2;

        m[s1] = s2;
    }

    while(M--) {
        string s; cin >> s;

        string ans = "";

        for(int i=0; i<s.length(); i++) {
            for(int j=1; j<=s.length()-i; j++) {
                string tmp = s.substr(i, j);

                if(m[tmp] != "") ans += m[tmp];
            }
        }

        if(ans != "") cout << ans << "\n";
        else cout << -1 << "\n";
    }
}
