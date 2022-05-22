#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001] = {0, 1, 2, 2};

    for(int i=4; i<=1000; i++) {
        dp[i] = 1;
        if(i % 2 == 0)
            for(int j=0; j<i; j+=2) dp[i] += dp[(i-j)/2];
        else
            for(int j=1; j<i; j+=2) dp[i] += dp[(i-j)/2];
    }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N] << "\n";
    }
}
