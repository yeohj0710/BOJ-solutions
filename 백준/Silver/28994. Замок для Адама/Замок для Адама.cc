#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    int l = 1, r = 1e10;

    while(l <= r) {
        int md = (l + r) / 2;

        int sum = md * (md + 1) / 2;

        if(sum <= n) l = md + 1;
        else r = md - 1;
    }

    cout << r << "\n";
}
