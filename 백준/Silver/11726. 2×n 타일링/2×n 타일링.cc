#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001] = {0, 1, 2};

    int N; cin >> N;

    for(int i=3; i<=N; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % 10007;

    cout << dp[N] << "\n";
}
