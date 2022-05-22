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

        vector<int> sum(N+1);
        for(int i=1; i<=N; i++) sum[i] = sum[i-1] + v[i-1];

        int ans = INT_MIN;
        for(int i=0; i<=N; i++)
            for(int j=i+1; j<=N; j++) ans = max(ans, sum[j] - sum[i]);

        cout << ans << "\n";
    }
}
