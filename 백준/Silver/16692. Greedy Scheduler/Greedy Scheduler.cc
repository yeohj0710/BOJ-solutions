#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v(n);

    for(int i=0; i<m; i++) {
        int x; cin >> x;

        int idx = 0, mn = INT_MAX;

        for(int j=0; j<n; j++)
            if(v[j] < mn) {
                mn = v[j];
                idx = j;
            }

        v[idx] += x;

        cout << idx + 1 << " ";
    }
    cout << "\n";
}
