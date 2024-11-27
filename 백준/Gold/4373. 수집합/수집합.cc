#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        unordered_map<int, vector<pair<int, int>>> mp;

        for(int i=0; i<n; i++)
            for(int j=i+1; j<n; j++) mp[v[i] + v[j]].push_back({i, j});

        int ans = INT_MIN;

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) {
                if(i == j) continue;

                vector<pair<int, int>> u = mp[v[i] - v[j]];

                for(int k=0; k<u.size(); k++) {
                    if(i == u[k].first || i == u[k].second || j == u[k].first || j == u[k].second) continue;

                    ans = max(ans, v[i]);
                }
            }

        if(ans == INT_MIN) {
            cout << "no solution\n";
            continue;
        }

        cout << ans << "\n";
    }
}
