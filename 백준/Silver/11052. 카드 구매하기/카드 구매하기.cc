#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> card(N+1), dp(N+1); // dp[i] : max cost of buying "i" cards
    for(int i=1; i<=N; i++) cin >> card[i];

    dp[1] = card[1];

    for(int i=2; i<=N; i++)
        for(int j=1; j<=i; j++)
            dp[i] = max(dp[i], dp[i-j] + card[j]);

    cout << dp[N];
}
