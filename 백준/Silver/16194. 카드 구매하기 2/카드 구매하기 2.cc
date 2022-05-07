#include <bits/stdc++.h>
using namespace std;

const int INF = 1e8;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> card(N+1);
    for(int i=1; i<=N; i++) cin >> card[i];

    vector<int> dp(N+1, INF);
    dp[0] = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=i; j++)
            dp[i] = min(dp[i], dp[i-j] + card[j]);

    cout << dp[N] << "\n";
}
