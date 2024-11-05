#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    vector<int> v;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        for(int j=0; j<x; j++) v.push_back(i + 1);
    }

    while(m--) {
        int x; cin >> x;

        cout << v[x] << "\n";
    }
}
