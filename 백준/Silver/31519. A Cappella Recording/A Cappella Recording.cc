#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans = 1, cur = v[0];

    for(int i=1; i<v.size(); i++) {
        if(v[i] - cur > M) {
            ans++;
            cur = v[i];
        }
    }

    cout << ans << "\n";
}
