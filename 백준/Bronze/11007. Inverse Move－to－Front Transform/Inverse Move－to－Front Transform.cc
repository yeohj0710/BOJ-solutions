#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str = "";

        for(int i=0; i<26; i++) str += char('a' + i);

        int N; cin >> N;
        string ans = "";

        while(N--) {
            int x; cin >> x;

            str = str[x] + str.substr(0, x) + str.substr(x+1, str.length() - x);

            ans += str.front();
        }

        cout << ans << "\n";
    }
}
