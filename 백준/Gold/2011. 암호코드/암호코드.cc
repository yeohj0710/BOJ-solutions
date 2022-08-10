#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str[0] == '0') {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> dp(str.length()+1);
    dp[0] = 1, dp[1] = 1;

    for(int i=1; i<str.length(); i++) {
        if(str[i] != '0') dp[i+1] += dp[i];

        if(i > 0 && (str[i-1] == '1' || (str[i-1] == '2' && str[i] <= '6'))) dp[i+1] += dp[i-1];

        dp[i+1] %= (int)(1e6);
    }

    cout << dp[str.length()] << "\n";
}
