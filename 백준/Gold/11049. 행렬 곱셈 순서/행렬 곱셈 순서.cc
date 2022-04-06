#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> row(N+1), col(N+1);
    for(int i=1; i<=N; i++)
        cin >> row[i] >> col[i];

    vector<vector<int>> dp(N+2, vector<int>(N+2));
    for(int i=N; i>0; i--)
        for(int j=i+1; j<=N; j++) {
            dp[i][j] = INT_MAX;
            for(int k=i; k<j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k+1][j] + row[i] * col[k] * col[j]);
        }

    cout << dp[1][N];
}
