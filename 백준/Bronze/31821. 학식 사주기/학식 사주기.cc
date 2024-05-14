#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    int M; cin >> M;

    int ans = 0;

    while(M--) {
        int x; cin >> x;

        ans += v[x-1];
    }

    cout << ans << "\n";
}
