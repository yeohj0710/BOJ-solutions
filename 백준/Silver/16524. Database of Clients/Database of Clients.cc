#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;
    int ans = 0;

    while(N--) {
        string str; cin >> str;

        string tmp = "";
        bool a = false, p = false;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == '@') {
                a = true;
                p = false;
            }
            else if(str[i] == '+') p = true;
            else if(p) continue;
            else if(str[i] == '.') {
                if(a) tmp += str[i];
                else continue;
            }
            else tmp += str[i];
        }

        if(!m[tmp]) ans++;

        m[tmp] = true;
    }

    cout << ans << "\n";
}
