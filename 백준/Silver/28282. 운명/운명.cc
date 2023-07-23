#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(M+1), u(M+1);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        u[x]++;
    }

    int ans = 0;

    for(int i=1; i<=M; i++) ans += v[i] * (N - u[i]);

    cout << ans << "\n";
}
