#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[101] = {0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9};
    for(int i=11; i<=100; i++) dp[i] = dp[i-1] + dp[i-5];

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        cout << dp[x] << "\n";
    }
}
