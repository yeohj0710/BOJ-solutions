#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<int> dp(N), le(N);
        dp[0] = v[0];

        for(int i=1; i<N; i++) {
            if(dp[i-1] >= 0) {
                dp[i] = dp[i-1] + v[i];
                le[i] = le[i-1];
            }
            else {
                dp[i] = v[i];
                le[i] = i;
            }
        }

        int Max = INT_MIN, l, r;
        for(int i=0; i<N; i++)
            if(dp[i] > Max) {
                Max = dp[i];
                l = le[i] + 1;
                r = i + 1;
            }

        cout << l << " " << r << "\n";
    }
}
