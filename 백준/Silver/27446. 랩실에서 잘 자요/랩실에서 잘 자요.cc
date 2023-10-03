#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<bool> v(N+1);
    while(M--) {
        int x; cin >> x;

        v[x] = true;
    }

    vector<vector<int>> u(N+1, vector<int>(2));
    u[0][1] = INT_MAX;

    for(int i=1; i<=N; i++) {
        if(v[i]) {
            u[i][0] = min(u[i-1][0], u[i-1][1]);
            u[i][1] = min(u[i-1][0] + 7, u[i-1][1] + 2);
        }
        else {
            u[i][0] = INT_MAX;
            u[i][1] = min(u[i-1][0] + 7, u[i-1][1] + 2);
        }
    }

    cout << min(u[N][0], u[N][1]) << "\n";
}
