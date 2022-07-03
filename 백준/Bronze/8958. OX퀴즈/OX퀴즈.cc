#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt = 0, ans = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'O') cnt++;
            else {
                ans += cnt * (cnt + 1) / 2;
                cnt = 0;
            }
        }
        ans += cnt * (cnt + 1) / 2;

        cout << ans << "\n";
    }
}
