#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N == 0) {
            cout << 0 << "\n";
            continue;
        }

        string ans = "";

        while(N > 0) {
            ans = char(N % 3 + '0') + ans;
            N /= 3;
        }

        cout << ans << "\n";
    }
}
