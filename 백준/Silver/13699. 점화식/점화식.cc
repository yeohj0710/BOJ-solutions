#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<long long> dp(N+1);
    dp[0] = 1;

    for(int i=1; i<=N; i++)
        for(int j=0; j<i; j++) dp[i] += dp[j] * dp[i-1-j];

    cout << dp[N] << "\n";
}
