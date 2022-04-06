#include <bits/stdc++.h>
using namespace std;

int dp[101][100001] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;
    vector<pair<int, int>> obj(N+1);
    for(int i=1; i<=N; i++)
        cin >> obj[i].first >> obj[i].second;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=K; j++) {
            dp[i][j] = dp[i-1][j];
            if(obj[i].first <= j)
                dp[i][j] = max(dp[i][j], dp[i-1][j-obj[i].first] + obj[i].second);
        }
    cout << dp[N][K];
}
