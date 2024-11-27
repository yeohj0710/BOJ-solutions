#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, n; cin >> a >> b >> n;

    unordered_map<int, int> mp1, mp2;

    for(int i=0; i<n; i++) {
        int x, m; cin >> x >> m;

        vector<int> v(m);
        int idx1 = -1, idx2 = -1;

        for(int j=0; j<m; j++) {
            cin >> v[j];

            if(v[j] == a) idx1 = j;
            if(v[j] == b) idx2 = j;
        }

        if(idx1 != -1) {
            for(int j=idx1+1; j<m; j++) {
                if(mp1.find(v[j]) == mp1.end()) mp1[v[j]] = x;
                else mp1[v[j]] = min(mp1[v[j]], x);
            }
        }

        if(idx2 != -1) {
            for(int j=0; j<idx2; j++) {
                if(mp2.find(v[j]) == mp2.end()) mp2[v[j]] = x;
                else mp2[v[j]] = min(mp2[v[j]], x);
            }
        }
    }

    int ans = INT_MAX;

    if(mp1.find(b) != mp1.end()) ans = min(ans, mp1[b]);

    for(int i=1; i<=10000; i++) {
        if(mp1.find(i) == mp1.end() || mp2.find(i) == mp2.end()) continue;

        ans = min(ans, mp1[i] + mp2[i]);
    }

    if(ans == INT_MAX) {
        cout << -1 << "\n";
        return 0;
    }

    cout << ans << "\n";
}
