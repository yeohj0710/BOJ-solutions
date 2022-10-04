#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N), u(M), w(K);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];
    for(int i=0; i<K; i++) cin >> w[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());
    sort(w.begin(), w.end());

    int ans = INT_MAX;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            int x = upper_bound(w.begin(), w.end(), min(v[i], u[j])) - w.begin();

            if(x < w.size()) ans = min(ans, max({v[i], u[j], w[x]}) - min({v[i], u[j], w[x]}));
            if(x > 0) ans = min(ans, max({v[i], u[j], w[x-1]}) - min({v[i], u[j], w[x-1]}));
        }

    cout << ans << "\n";
}
