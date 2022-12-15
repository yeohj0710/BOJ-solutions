#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<vector<bool>> v(4, vector<bool>(4));
    for(int i=1; i<=3; i++) v[i][i] = true;

    vector<int> u(4);

    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        for(int i=1; i<=3; i++) {
            swap(v[i][a], v[i][b]);

            if(v[i][c]) u[i]++;
        }
    }

    int ans = 0;
    for(int i=1; i<=3; i++) ans = max(ans, u[i]);

    cout << ans << "\n";
}
