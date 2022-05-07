#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000001;
const int MOD = 1000000007;

int dp[MAX] = {0, 1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=2; i<=N; i++)
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;

    cout << dp[N] << "\n";
}
