#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[10001] = {1, 1};

    for(int i=2; i<=N; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j] * dp[i-1-j]) % (int)(1e9 + 7);

    cout << dp[N] << "\n";
}
