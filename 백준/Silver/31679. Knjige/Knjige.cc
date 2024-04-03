#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, a, b; cin >> N >> M >> a >> b;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        cin >> v[i];

        v[i] += v[i-1];
    }

    int ans = 0;

    for(int i=0; i<=N; i++) {
        if(b * i > M) continue;

        int x = (M - b * i) / a;

        ans = max(ans, v[min(i + x, N)] - v[i]);
    }

    cout << ans << "\n";
}
