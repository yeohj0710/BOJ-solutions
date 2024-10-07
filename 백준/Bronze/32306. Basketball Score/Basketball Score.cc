#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<int> v(6);
    for(int i=0; i<6; i++) cin >> v[i];

    int a = v[0] + v[1] * 2 + v[2] * 3, b = v[3] + v[4] * 2 + v[5] * 3;

    if(a > b) cout << 1 << "\n";
    else if(a < b) cout << 2 << "\n";
    else cout << 0 << "\n";
}
