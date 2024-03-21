#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[i] -= x;
    }

    sort(v.begin(), v.end());

    while(M--) {
        int a, b; cin >> a >> b;

        int cnt = v.end() - upper_bound(v.begin(), v.end(), b);

        if(cnt >= a) cout << "YES\n";
        else cout << "NO\n";
    }
}
