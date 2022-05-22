#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[68] = {1, 1, 2, 4};

    for(int i=4; i<=67; i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N] << "\n";
    }
}
