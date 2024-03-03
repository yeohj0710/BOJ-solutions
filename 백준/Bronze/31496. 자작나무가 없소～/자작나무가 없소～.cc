#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int ans = 0;

    while(N--) {
        string a; int b; cin >> a >> b;

        vector<string> v;
        string word = "";
        bool chk = false;

        for(int i=0; i<a.length(); i++) {
            if(a[i] == '_') {
                if(word == str) chk = true;

                word = "";
            }
            else word += a[i];
        }
        if(word == str) chk = true;

        if(chk) ans += b;
    }

    cout << ans << "\n";
}
