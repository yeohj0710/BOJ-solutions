#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(4);

    for(int i=0; i<4; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[0] * v[2] << "\n";
}
