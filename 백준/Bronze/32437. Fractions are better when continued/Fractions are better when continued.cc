#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n+1);
    v[0] = v[1] = 1;

    for(int i=2; i<=n; i++) v[i] = v[i-2] + v[i-1];

    cout << v[n] << "\n";
}
