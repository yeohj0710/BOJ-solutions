#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<int> v;
    int mx = LLONG_MIN;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        if(x >= mx) v.push_back(x);

        mx = max(mx, x);
    }

    for(int i=0; i<v.size(); i++) cout << v[i] << " ";
    cout << "\n";
}
