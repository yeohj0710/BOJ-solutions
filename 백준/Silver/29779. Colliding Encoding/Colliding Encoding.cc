#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        unordered_map<char, char> m;

        for(int i=0; i<26; i++) {
            int x; cin >> x;

            m['A' + i] = '0' + x;
        }

        int N; cin >> N;

        unordered_map<string, bool> mm;
        bool chk = true;

        while(N--) {
            string str; cin >> str;

            string num = "";

            for(int i=0; i<str.length(); i++) num += m[str[i]];

            if(mm[num]) chk = false;

            mm[num] = true;
        }

        if(chk) cout << "NO\n";
        else cout << "YES\n";
    }
}
