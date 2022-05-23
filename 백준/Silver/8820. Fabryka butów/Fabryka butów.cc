#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, K; cin >> N >> K;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<int> sum(N);
        sum[N-1] = v[N-1];
        for(int i=N-2; i>=0; i--) sum[i] = sum[i+1] + v[i];

        int ans = 0;
        for(int i=0; i<N; i++) ans = max(ans, sum[i] * (i+1) - K * sum[i]);

        cout << ans << "\n";
    }
}
