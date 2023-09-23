#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<N; i++) {
        ans += v[i];

        if(i < N-1 && ans > M) ans--;
    }

    cout << ans << "\n";
}

