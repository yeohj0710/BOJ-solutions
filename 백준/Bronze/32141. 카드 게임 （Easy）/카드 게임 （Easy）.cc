#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int sum = 0;

    for(int i=0; i<n; i++) {
        sum += v[i];

        if(sum >= m) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
