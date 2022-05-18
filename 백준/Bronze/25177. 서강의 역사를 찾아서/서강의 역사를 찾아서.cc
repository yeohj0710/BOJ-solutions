#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> u(max(N, M)), v(max(N, M));
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<M; i++) cin >> v[i];

    int ans = 0;
    for(int i=0; i<max(N, M); i++) ans = max(ans, v[i] - u[i]);

    cout << ans << "\n";
}
