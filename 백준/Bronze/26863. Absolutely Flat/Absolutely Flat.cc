#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    vector<int> v(4);
    for(int i=0; i<4; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int x; cin >> x;

    if(v[0] == v[3] || (v[0] + x == v[1] && v[1] == v[3])) cout << 1 << "\n";
    else cout << 0 << "\n";
}
