#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int m; cin >> m;

    vector<string> u(m);

    for(int k=0; k<m; k++) {
        cin >> u[k];

        bool chk = false;

        for(int i=0; i<n; i++) {
            if(v[i] == u[k]) {
                cout << 1 << "\n";
                chk = true;
                break;
            }
        }

        if(chk) continue;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                string ss = v[i] + v[j];

                if(ss == u[k]) {
                    cout << 2 << "\n";
                    chk = true;
                    break;
                }
            }

            if(chk) break;
        }

        if(chk) continue;

        cout << 0 << "\n";
    }
}
