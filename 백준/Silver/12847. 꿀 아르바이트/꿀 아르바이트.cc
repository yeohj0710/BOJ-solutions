#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int ans = INT_MIN;
    for(int i=0; i<N-(K-1); i++) ans = max(ans, v[i+K] - v[i]);

    cout << ans << "\n";
}
