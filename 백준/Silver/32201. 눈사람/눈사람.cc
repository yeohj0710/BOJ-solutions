#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n), u(n);
    for(int i=0; i<n; i++) cin >> v[i];

    unordered_map<int, int> mp1, mp2;

    for(int i=0; i<n; i++) mp1[v[i]] = i;

    for(int i=0; i<n; i++) {
        cin >> u[i];

        mp2[u[i]] = i;
    }

    int mx = 0;

    for(int i=0; i<n; i++) mx = max(mx, mp1[v[i]] - mp2[v[i]]);

    for(int i=0; i<n; i++) {
        if(mp1[u[i]] - mp2[u[i]] == mx) cout << u[i] << " ";
    }

    cout << "\n";
}
