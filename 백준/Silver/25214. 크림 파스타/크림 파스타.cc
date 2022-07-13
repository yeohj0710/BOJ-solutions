#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> dp(N);
    int Min;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i == 0) {
            dp[0] = 0;
            Min = x;
        }
        else {
            Min = min(Min, x);

            if(x - Min > dp[i-1]) dp[i] = x - Min;
            else dp[i] = dp[i-1];
        }

        cout << dp[i] << " ";
    }
    cout << "\n";
}
