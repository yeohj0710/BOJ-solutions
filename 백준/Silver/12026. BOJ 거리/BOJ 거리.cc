#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    vector<int> dp(N, -1);
    dp[0] = 0;

    for(int i=0; i<N; i++)
        for(int j=0; j<i; j++) {
            bool check = false;

            if(str[j] == 'B' && str[i] == 'O') check = true;
            if(str[j] == 'O' && str[i] == 'J') check = true;
            if(str[j] == 'J' && str[i] == 'B') check = true;

            if(!check || dp[j] == -1) continue;

            if(dp[i] == -1 || dp[j] + (i-j)*(i-j) < dp[i]) dp[i] = dp[j] + (i-j)*(i-j);
        }

    cout << dp[N-1] << "\n";
}
