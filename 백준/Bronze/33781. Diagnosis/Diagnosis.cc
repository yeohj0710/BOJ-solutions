#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    unordered_map<int, bool> mp;

    int k; cin >> k;

    while(k--) {
        int x; cin >> x;

        mp[x] = true;
    }

    vector<int> v;

    for(int i=1; i<=n; i++) {
        int a; cin >> a;

        if(mp[i]) {
            for(int j=0; j<a; j++) {
                int x; cin >> x;

                v.push_back(x);
            }
        }
        else {
            while(a--) {
                int x; cin >> x;
            }
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    vector<int> u(m);
    for(int i=0; i<m; i++) u[i] = i + 1;

    if(v == u) cout << "yes\n";
    else cout << "no\n";
}
