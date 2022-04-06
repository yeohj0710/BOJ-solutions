#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    vector<pair<int, int>> arr; arr.resize(N);
    for(int i=0; i<N; i++)
        cin >> arr[i].first >> arr[i].second;
    sort(arr.begin(), arr.end());
    int dp[1000]; fill(dp, dp+1000, 1);

    int LIS = 1;
    for(int i=0; i<N; i++) {
        for(int j=0; j<i; j++)
            if(arr[i].second > arr[j].second) dp[i] = max(dp[i], dp[j]+1);
        LIS = max(LIS, dp[i]);
    }
    cout << N - LIS;
}
