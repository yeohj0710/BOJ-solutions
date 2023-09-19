#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x > v[i]) ans += x - v[i];
    }

    cout << ans << "\n";
}
