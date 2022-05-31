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

        int M; cin >> M;

        vector<int> dp(M+1); dp[0] = 1;
        for(int i=0; i<N; i++)
            for(int j=v[i]; j<=M; j++) dp[j] += dp[j - v[i]];

        cout << dp[M] << "\n";
    }
}
