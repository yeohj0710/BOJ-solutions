#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T = 100;

    while(T--) {
        int N = 5000;

        int cnt = 0;

        while(N--) {
            double x; cin >> x;

            if(x < 0.05 || x > 0.95) cnt++;
        }

        if(cnt >= 360) cout << "A\n";
        else cout << "B\n";
    }
}
