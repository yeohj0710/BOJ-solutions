#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[100001] = {0, -1, 1, -1, 2, 1};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=6; i<=N; i++) {
        if(dp[i-2] == -1 && dp[i-5] != -1) dp[i] = dp[i-5] + 1;
        else if(dp[i-2] != -1 && dp[i-5] == -1) dp[i] = dp[i-2] + 1;
        else dp[i] = min(dp[i-2], dp[i-5]) + 1;
    }

    cout << dp[N] << "\n";
}
