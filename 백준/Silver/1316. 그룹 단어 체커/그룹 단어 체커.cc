#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    int ans = 0;
    while(T--) {
        string str; cin >> str;

        vector<bool> check(26);

        bool check2 = true;
        for(int i=1; i<str.length(); i++) {
            if(str[i] != str[i-1]) {
                if(check[str[i-1] - 'a']) check2 = false;
                check[str[i-1] - 'a'] = true;
            }
        }
        if(check[str[str.length()-1] - 'a']) check2 = false;

        if(check2) ans++;
    }

    cout << ans << "\n";
}
