#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    int ans = 0, cur = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        cur += M - v[i];
        ans += abs(cur);
    }

    cout << ans << "\n";
}
