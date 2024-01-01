#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=1; i<N; i++) {
        if(v[i] + M <= v[i-1]) {
            cout << -1 << "\n";
            return 0;
        }
        if(v[i] <= v[i-1]) {
            v[i] += M;
            ans++;
        }
    }

    cout << ans <<"\n";
}
