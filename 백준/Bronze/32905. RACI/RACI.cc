#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    bool chk = true;

    while(n--) {
        int cnt = 0;

        for(int i=0; i<m; i++) {
            char ch; cin >> ch;

            if(ch == 'A') cnt++;
        }

        if(cnt != 1) chk = false;
    }

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
