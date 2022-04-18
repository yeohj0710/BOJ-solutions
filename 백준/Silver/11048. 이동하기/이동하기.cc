#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;

int arr[MAX][MAX] = {};
int dp[MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) cin >> arr[i][j];

    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++) {
            dp[i][j] = max(dp[i-1][j-1] + arr[i][j], dp[i-1][j] + arr[i][j]);
            dp[i][j] = max(dp[i][j], dp[i][j-1] + arr[i][j]);
        }

    cout << dp[N][M] << "\n";
}
