#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<n; i++)
        if(v[i] == v[(i + n / 2) % n]) ans++;

    cout << ans << "\n";
}
