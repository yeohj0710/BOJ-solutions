#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    string vow = "aeiou";

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        cout << str << "\n";

        int cnt = 0;
        for(int i=0; i<str.length(); i++)
            for(int j=0; j<vow.length(); j++)
                if(str[i] == vow[j]) cnt++;

        if(cnt > str.length() - cnt) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
}
