#include <bits/stdc++.h>
using namespace std;

const int MAX = 101;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int arr[MAX][MAX];

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> arr[i][j];

    long long dp[MAX][MAX] = {};
    dp[0][0] = 1;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) {
            if(arr[i][j] == 0) continue;

            if(i + arr[i][j] < N) dp[i + arr[i][j]][j] += dp[i][j];
            if(j + arr[i][j] < N) dp[i][j + arr[i][j]] += dp[i][j];
        }

    cout << dp[N-1][N-1];
}
