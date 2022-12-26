#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int N = str.length();

        str = '0' + str;

        vector<int> dp(N+1), pos(200); dp[0] = 1;

        for(int i=1; i<=N; i++) {
            dp[i] = dp[i-1] * 2;

            if(pos[str[i]]) dp[i] -= dp[pos[str[i]] - 1];

            pos[str[i]] = i;
        }

        cout << dp[N] << "\n";
    }
}
