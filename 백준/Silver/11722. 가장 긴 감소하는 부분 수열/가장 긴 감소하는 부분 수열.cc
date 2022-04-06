#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int arr[1005]; for(int i=0; i<N; i++) cin >> arr[i];
    int dp[1005]; fill(dp, dp+1005, 1);

    int ans = 1;
    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++) {
            if(arr[i] < arr[j]) dp[i] = max(dp[i], dp[j]+1);
            ans = max(ans, dp[i]);
        }
    cout << ans;
}
