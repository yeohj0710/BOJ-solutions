#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<int> v(n), u(m), w(k);

    int a = 0, b = 0;

    for(int i=0; i<n; i++) cin >> v[i], a += v[i];
    for(int i=0; i<m; i++) cin >> u[i], a += u[i];
    for(int i=0; i<k; i++) cin >> w[i], a += w[i];

    sort(v.begin(), v.end(), greater<int>());
    sort(u.begin(), u.end(), greater<int>());
    sort(w.begin(), w.end(), greater<int>());

    int x = min({n, m, k});

    for(int i=0; i<x; i++) {
        b += (v[i] + u[i] + w[i]) * 0.9;
    }

    for(int i=x; i<n; i++) b += v[i];
    for(int i=x; i<m; i++) b += u[i];
    for(int i=x; i<k; i++) b += w[i];

    cout << a << "\n";
    cout << b << "\n";
}
