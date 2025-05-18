#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cnt = 0, mx = 0;

    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            for(int k=j+1; k<n; k++) {
                if(v[k] - v[i] > m) continue;

                cnt++;

                mx = max(mx, v[i] + v[j] + v[k]);
            }

    if(cnt == 0) {
        cout << -1 << "\n";
        return 0;
    }

    cout << cnt << " " << mx << "\n";
}
