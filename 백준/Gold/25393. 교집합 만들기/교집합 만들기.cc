#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    unordered_map<int, unordered_map<int, bool>> mpp;
    unordered_map<int, bool> mpl, mpr;
    unordered_map<int, int> mnl, mxr;

    while(n--) {
        int a, b; cin >> a >> b;

        mpp[a][b] = mpl[a] = mpr[b] = true;

        if(mnl.find(b) == mnl.end()) mnl[b] = a;
        else mnl[b] = min(mnl[b], a);

        if(mxr.find(a) == mxr.end()) mxr[a] = b;
        else mxr[a] = max(mxr[a], b);
    }

    int m; cin >> m;

    while(m--) {
        int a, b; cin >> a >> b;

        if(mpp[a][b]) cout << 1 << "\n";
        else if(mpl[a] && mpr[b] && mnl[b] <= a && mxr[a] >= b) cout << 2 << "\n";
        else cout << -1 << "\n";
    }
}
