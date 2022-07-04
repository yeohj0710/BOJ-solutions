#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001] = {0, 0, 1, 0, 1};

    for(int i=5; i<=1000; i++) {
        if(dp[i-1] && dp[i-3] && dp[i-4]) dp[i] = 0;
        else dp[i] = 1;
    }

    int N; cin >> N;

    if(dp[N]) cout << "SK\n";
    else cout << "CY\n";
}
