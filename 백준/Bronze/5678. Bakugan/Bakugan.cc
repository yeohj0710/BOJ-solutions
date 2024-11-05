#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int n; cin >> n;

        if(n == 0) break;

        vector<int> v(n), u(n);
        for(int i=0; i<n; i++) cin >> v[i];
        for(int i=0; i<n; i++) cin >> u[i];

        int a = 0, b = 0;
        bool chk = false;

        for(int i=0; i<n; i++) {
            a += v[i], b += u[i];

            if(i < 2 || chk) continue;

            if(v[i] == v[i-1] && v[i] == v[i-2]) a += 30, chk = true;
            if(u[i] == u[i-1] && u[i] == u[i-2]) b += 30, chk = true;
        }

        if(a > b) cout << "M\n";
        else if(a < b) cout << "L\n";
        else cout << "T\n";
    }
}
