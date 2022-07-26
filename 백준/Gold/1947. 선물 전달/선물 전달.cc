#include <bits/stdc++.h>
#define int long long
using namespace std;

int dp[1000001] = {0, 0, 1};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=3; i<=1000000; i++)
        dp[i] = (dp[i-1] + dp[i-2]) * (i-1) % (int)(1e9);

    int N; cin >> N;

    cout << dp[N] << "\n";
}
