#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<int, pair<int, int>> m;

    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++) {
            int x; cin >> x;

            m[x] = {i, j};
        }

    int ans = 1;

    for(int i=2; i<=20; i++) {
        int a = m[i-1].first, b = m[i-1].second;
        int c = m[i].first, d = m[i].second;

        bool chk = false;

        if(abs(a - c) == 1 && abs(b - d) == 2) chk = true;
        if(abs(a - c) == 2 && abs(b - d) == 1) chk = true;

        if(chk) ans++;
        else break;
    }

    cout << ans << "\n";
}
