#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int ans = 0;

    for(int i=0; i<n; i++) {
        set<string> st;

        for(int j=0; j<m; j++) {
            string s; cin >> s;

            st.insert(s);
        }

        ans += m - st.size();
    }

    cout << ans << "\n";
}
