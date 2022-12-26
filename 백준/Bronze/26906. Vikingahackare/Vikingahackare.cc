#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, char> m;

    while(N--) {
        char ch; string str; cin >> ch >> str;

        m[str] = ch;
    }

    string str; cin >> str;

    string ans = "";

    for(int i=0; i<str.length(); i+=4) {
        string tmp = str.substr(i, 4);

        if(m[tmp] != NULL) ans += m[tmp];
        else ans += "?";
    }

    cout << ans << "\n";
}
