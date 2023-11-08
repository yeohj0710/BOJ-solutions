#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(9);

    for(int i=0; i<9; i++) cin >> v[i];

    int sum = v[6] * (v[1] * v[2]) + v[7] * v[2] + v[8];

    sum %= (v[3] * v[4] * v[5]);

    cout << sum / (v[4] * v[5]) << " ";

    sum %= (v[4] * v[5]);

    cout << sum / v[5] << " ";

    sum %= v[5];

    cout << sum << "\n";
}
