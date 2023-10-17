#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(1e3 + 2);
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    int ans = 0;

    for(int i=1e3; i>=1; i--) {
        v[i] += v[i+1];

        int x = min(v[i], M);

        ans += x;
        v[i] -= x;
    }

    cout << ans << "\n";
}
