#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    int tot = 0;

    for(int i=0; i<n; i++) {
        cin >> v[i];

        tot += v[i];
    }

    sort(v.begin(), v.end());

    int mx = 0;

    mx = max({2 * v[0] * v[1] - v[0] - v[1], 2 * v[n-2] * v[n-1] - v[n-2] - v[n-1], 2 * v[0] * v[n-1] - v[0] - v[n-1], (int)0});

    cout << tot + mx << "\n";
}
