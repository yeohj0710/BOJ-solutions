#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<pair<int, int>> u(N), v(M);

    for(int i=0; i<N; i++) cin >> u[i].first >> u[i].second;
    for(int i=0; i<M; i++) cin >> v[i].first >> v[i].second;

    int ans = 0;
    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            ans = max(ans, (int)(pow(v[i].first - u[j].first, 2) + pow(v[i].second - u[j].second, 2)));

    cout << ans << "\n";
}
