#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    vector<int> dp(K+1); dp[0] = 1;
    for(int i=0; i<N; i++)
        for(int j=arr[i]; j<=K; j++) dp[j] += dp[j - arr[i]];

    cout << dp[K];
}
