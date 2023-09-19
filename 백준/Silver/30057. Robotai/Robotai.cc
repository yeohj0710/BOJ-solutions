#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N+2), u(N+2), w(N+2);

    for(int i=1; i<=N; i++) cin >> v[i];

    v[N+1] = M;

    for(int i=1; i<=N; i++)
        u[i] = u[i-1] + v[i] - v[i-1] + K;

    for(int i=N; i>=1; i--)
        w[i] = w[i+1] + v[i+1] - v[i] + K;

    int ans = INT_MAX;

    for(int i=0; i<=N; i++)
        ans = min(ans, max(u[i], w[i+1]));

    cout << ans << "\n";
}
