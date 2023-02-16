#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1), u(M+1);

    for(int i=1; i<=N; i++) cin >> v[i];

    u[1] = v[N];

    for(int i=2; i<=M; i++) cin >> u[i];

    int x, y, vx = INT_MAX, vy = INT_MAX;

    for(int i=1; i<=N; i++) {
        if(v[i] < vx) {
            vx = v[i];
            x = i;
        }
    }

    for(int i=1; i<=M; i++) {
        if(u[i] < vy) {
            vy = u[i];
            y = i;
        }
    }

    cout << x << " " << y << "\n";
}
