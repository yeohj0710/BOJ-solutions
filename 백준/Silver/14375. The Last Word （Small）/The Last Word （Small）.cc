#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        string ans = "";
        ans += str[0];

        for(int i=1; i<str.length(); i++) {
            if(str[i] >= ans[0]) ans = str[i] + ans;
            else ans += str[i];
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
