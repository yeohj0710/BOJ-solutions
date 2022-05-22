#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int dp[10001] = {1};

    for(int i=1; i<=3; i++)
        for(int j=i; j<=10000; j++) dp[j] += dp[j-i];

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << dp[N] << "\n";
    }
}
