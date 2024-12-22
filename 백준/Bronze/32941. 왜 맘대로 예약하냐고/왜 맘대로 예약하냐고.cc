#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int k; cin >> k;

    bool chk = true;

    while(k--) {
        int a; cin >> a;

        bool flag = false;

        while(a--) {
            int x; cin >> x;

            if(x == m) flag = true;
        }

        if(!flag) chk = false;
    }

    if(chk) cout << "YES\n";
    else cout << "NO\n";
}
