#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];

        int ans = 0, l = 0;
        unordered_set<int> st;

        for(int r=0; r<n; r++) {
            while(st.count(v[r])) {
                st.erase(v[l]);
                l++;
            }

            st.insert(v[r]);
            ans = max(ans, r - l + 1);
        }

        cout << ans << "\n";
    }
}
