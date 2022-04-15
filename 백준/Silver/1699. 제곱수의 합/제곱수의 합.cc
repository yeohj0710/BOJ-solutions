#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> dp(N+1, INT_MAX);
    dp[0] = 0;

    for(int i=1; i*i<=N; i++) dp[i*i] = 1;

    for(int i=2; i<=N; i++)
        for(int j=1; j*j<=i; j++)
            dp[i] = min(dp[i], dp[j*j] + dp[i - j*j]);

    cout << dp[N];
}
