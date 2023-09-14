#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(6);

    for(int i=0; i<6; i++) {
        int a, b; cin >> a >> b;

        v[i] = a + 10 * b;
    }

    int mx = 0;

    for(int i=1; i<6; i++) mx = max(mx, v[i]);

    if(mx < v[0]) cout << 0 << "\n";
    else cout << mx - v[0] + 1 << "\n";
}
