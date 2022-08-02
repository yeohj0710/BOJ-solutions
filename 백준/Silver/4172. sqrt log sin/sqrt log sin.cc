#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> dp(1e6 + 1);
    dp[0] = 1;

    for(int i=1; i<=1e6; i++) {
        double x = i;

        dp[i] = (dp[(int)(x - sqrt(x))] + dp[(int)(log(x))] + dp[(int)(x * sin(x) * sin(x))]) % (int)(1e6);
    }

    while(true) {
        int N; cin >> N;
        if(N == -1) break;

        cout << dp[N] << "\n";
    }
}
