#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int dp[82] = {0, 1};

    for(int i=2; i<=N+1; i++) dp[i] = dp[i-1] + dp[i-2];

    cout << (dp[N] + dp[N+1]) * 2 << "\n";
}
