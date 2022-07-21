#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[1001] = {1, 1};

    for(int i=2; i<=1000; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j] * dp[i-1-j]) % (int)(1e6);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        cout << dp[N] << "\n";
    }
}
