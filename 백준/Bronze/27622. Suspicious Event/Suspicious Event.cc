#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<int, bool> m;
    int ans = 0;

    while(N--) {
        int x; cin >> x;

        if(x > 0) {
            if(m[x]) ans++;
            m[x] = true;
        } else {
            if(!m[-x]) ans++;
            m[-x] = false;
        }
    }

    cout << ans << "\n";
}
