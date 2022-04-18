#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) cin >> arr[i];

    vector<int> dp(arr); // dp[i] : largest sum in the interval "0 ~ i"

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++)
            if(arr[i] > arr[j]) dp[i] = max(dp[i], dp[j] + arr[i]);

    int ans = 0;
    for(int i=0; i<N; i++) ans = max(ans, dp[i]);

    cout << ans;
}
