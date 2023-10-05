#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<char, bool> m;
    string str, ans = "";

    while(cin >> str) {
        for(int i=0; i<str.length(); i++) {
            if(m[str[i]]) continue;

            ans += str[i];
            m[str[i]] = true;
        }
    }

    cout << ans << "\n";
}
