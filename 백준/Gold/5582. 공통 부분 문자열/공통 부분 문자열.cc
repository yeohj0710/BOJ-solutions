#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    vector<vector<int>> dp(a.length()+1, vector<int>(b.length()+1));

    int ans = 0;

    for(int i=0; i<a.length(); i++)
        for(int j=0; j<b.length(); j++) {
            if(a[i] != b[j]) continue;

            dp[i+1][j+1] = dp[i][j] + 1;

            ans = max(ans, dp[i+1][j+1]);
        }

    cout << ans << "\n";
}
