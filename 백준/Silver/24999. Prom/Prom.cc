#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int ans = 0;
    for(int i=0; i<N; i++) {
        ans += upper_bound(u.begin(), u.end(), v[i]+K)
               - lower_bound(u.begin(), u.end(), v[i]-K);
    }

    cout << ans << "\n";
}
