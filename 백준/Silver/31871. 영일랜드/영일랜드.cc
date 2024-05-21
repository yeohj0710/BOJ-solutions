#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<vector<int>> v(n+1, vector<int>(n+1, INT_MAX));

    while(m--) {
        int a, b, c; cin >> a >> b >> c;

        if(v[a][b] == INT_MAX) v[a][b] = c;
        else v[a][b] = max(v[a][b], c);
    }

    vector<int> u(n);
    for(int i=0; i<n; i++) u[i] = i + 1;

    int ans = -1;

    while(true) {
        int sum = v[0][u[0]] + v[u[n-1]][0];

        for(int i=1; i<n; i++) sum += v[u[i-1]][u[i]];

        if(sum < INT_MAX) ans = max(ans, sum);

        if(!next_permutation(u.begin(), u.end())) break;
    }

    cout << ans << "\n";
}
