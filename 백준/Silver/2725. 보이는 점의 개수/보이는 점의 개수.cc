#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001] = {0, 3};

    for(int i=2; i<=1000; i++) {
        dp[i] = dp[i-1];

        for(int j=1; j<i; j++)
            if(__gcd(i, j) == 1) dp[i] += 2;
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;
        cout << dp[N] << "\n";
    }
}
