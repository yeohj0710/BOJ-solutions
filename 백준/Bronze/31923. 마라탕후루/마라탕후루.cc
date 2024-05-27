#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m, k; cin >> n >> m >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> u(n);
    bool chk = true;

    for(int i=0; i<n; i++) {
        int x; cin >> x;

        if((v[i] > x && m > k) || (v[i] < x && m < k)) {
            chk = false;
            continue;
        }

        if(v[i] == x) continue;

        if(m == k) {
            chk = false;
            continue;
        }

        if(v[i] > x && m < k) {
            if((v[i] - x) % (k - m) == 0) u[i] = (v[i] - x) / (k - m);
            else chk = false;
        }
        else {
            if((x - v[i]) % (m - k) == 0) u[i] = (x - v[i]) / (m - k);
            else chk = false;
        }
    }

    for(int i=0; i<n; i++)
        if(u[i] > 10000) chk = false;

    if(!chk) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    for(int i=0; i<n; i++) cout << u[i] << " ";
    cout << "\n";
}
