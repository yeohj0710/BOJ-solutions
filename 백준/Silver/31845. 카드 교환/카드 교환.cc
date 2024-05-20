#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;

    int i = 0, j = n-1;

    while(m--) {
        if(v[i] <= 0 || i > j) break;

        ans += v[i];

        i++, j--;
    }

    cout << ans << "\n";
}
