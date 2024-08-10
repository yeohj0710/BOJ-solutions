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

        if(n == 2 && v[0] == v[1]) {
            cout << v[0] << "\n";
            continue;
        }

        vector<int> u;
        unordered_map<int, bool> mp;

        for(int i=2; i<n; i++) {
            int x = -1;

            if(v[i-2] == v[i-1]) x = v[i-2];
            else if(v[i-2] == v[i]) x = v[i-2];
            else if(v[i-1] == v[i]) x = v[i-1];

            if(x != -1 && !mp[x]) {
                u.push_back(x);
                mp[x] = true;
            }
        }

        if(u.size() == 0)    {
            cout << -1 << "\n";
            continue;
        }

        sort(u.begin(), u.end());

        for(int i=0; i<u.size(); i++) cout << u[i] << " ";
        cout << "\n";
    }
}
