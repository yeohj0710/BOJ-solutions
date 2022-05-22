#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[51] = {1, 1, 3};

    for(int i=3; i<=N; i++) dp[i] = (dp[i-1] + dp[i-2] + 1) % (int)(1e9 + 7);

    cout << dp[N] << "\n";
}
