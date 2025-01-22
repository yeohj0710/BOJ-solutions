#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v(n), u;

    for(int i=0; i<n; i++) cin >> v[i];

    while(v.size() >= 2) {
        for(int i=1; i<v.size(); i++)
            u.push_back(v[i-1] + v[i]);

        for(int i=0; i<u.size(); i++) cout << u[i] << " ";
        cout << "\n";

        v = u;
        u.clear();
    }
}
