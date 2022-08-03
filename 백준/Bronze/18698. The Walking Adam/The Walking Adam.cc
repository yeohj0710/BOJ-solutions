#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int ans = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'U') ans++;
            else break;
        }

        cout << ans << "\n";
    }
}
