#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        vector<int> v(5), u(5);

        for(int i=0; i<5; i++) cin >> v[i];
        for(int i=0; i<5; i++) cin >> u[i];

        bool chk = false;

        for(int i=0; i<5; i++)
            for(int j=0; j<5; j++) {
                if(i == j) continue;

                if(v[i] == u[j]) chk = true;
            }

        if(chk) cout << "YES\n";
        else cout << "NO\n";
    }
}
