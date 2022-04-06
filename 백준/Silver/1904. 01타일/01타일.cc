#include <bits/stdc++.h>
using namespace std;

int dp[1000005] = {0, 1, 2};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=3; i<=N; i++)
        dp[i] = (dp[i-1] + dp[i-2])%15746;
    cout << dp[N];
}
