#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[2501] = {1, 1};
    for(int i=2; i<=2500; i++)
        for(int j=0; j<i; j++) dp[i] = (dp[i] + dp[j] * dp[i-1-j]) % (int)(1e9 + 7);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        cout << dp[N/2] << "\n";
    }
}
