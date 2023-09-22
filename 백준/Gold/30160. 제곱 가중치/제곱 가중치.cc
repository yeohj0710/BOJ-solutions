#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1), u(N+1), w(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i];

        u[i] = u[i-1] + v[i];
        w[i] = w[i-1] + 2 * u[i-1] + v[i];
    }

    int ans = 0;

    for(int i=1; i<=N; i++) {
        ans += w[i];

        cout << ans << " ";
    }

    cout << "\n";
}
