#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<int>> v = {{0, 1, 2, 3}, {4, 5, 6, 7}, {0, 1, 4, 5}, {1, 3, 5, 7}, {2, 3, 6, 7}, {0, 2, 4, 6}};

    int t; cin >> t;

    while(t--) {
        vector<int> u(4);

        for(int i=0; i<4; i++) cin >> u[i];

        sort(u.begin(), u.end());

        bool chk = false;

        for(int i=0; i<v.size(); i++)
            if(u == v[i]) chk = true;

        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
}
