#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[x] = i;
    }

    int ans = 0;

    for(int i=1; i<=M; i++) {
        int x; cin >> x;

        if(v[x] > M) ans++;
    }

    cout << ans << "\n";
}
