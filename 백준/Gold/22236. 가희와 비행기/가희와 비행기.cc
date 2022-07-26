#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int dp[2001] = {1, 1};
    for(int i=2; i<=2000; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j] * dp[i-1-j]) % M;

    cout << dp[(N-2)/2] << "\n";
}
