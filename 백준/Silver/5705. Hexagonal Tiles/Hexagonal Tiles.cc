#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[41] = {0, 1, 2};
    for(int i=3; i<=40; i++) dp[i] = dp[i-1] + dp[i-2];

    while(true) {
        int x; cin >> x;
        if(x == 0) break;

        cout << dp[x] << "\n";
    }
}
