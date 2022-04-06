#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int arr[1005]; for(int i=0; i<N; i++) cin >> arr[i];
    int dp[2][1005]; fill(&dp[0][0], &dp[1][1005], 1);

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++)
            if(arr[i] > arr[j]) dp[0][i] = max(dp[0][i], dp[0][j]+1);
    for(int i=N-1; i>=0; i--)
        for(int j=N-1; j>i; j--)
            if(arr[i] > arr[j]) dp[1][i] = max(dp[1][i], dp[1][j]+1);

    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, dp[0][i]+dp[1][i]-1);
    cout << ans;
}
