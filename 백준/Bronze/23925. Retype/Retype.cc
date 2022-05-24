#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, K, S; cin >> N >> K >> S;

        int ans = K - 1;

        if(K <= S) ans += N + 1 - K;
        else ans += min((K - S) + (N + 1 - S), N + 1);

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
