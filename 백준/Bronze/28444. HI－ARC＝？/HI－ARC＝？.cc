#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(5);

    for(int i=0; i<5; i++) cin >> v[i];

    cout << v[0] * v[1] - v[2] * v[3] * v[4] << "\n";
}

