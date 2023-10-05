#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Game " << t << ": ";

        int N; cin >> N;

        int a = 0, b = 0;

        while(N--) {
            int x, y; cin >> x >> y;

            if(x == y) continue;

            if(x < y) {
                if(x + 1 == y) {
                    if(x == 1) a += 6;
                    else a += x + y;
                }
                else b += y;
            }
            else {
                if(x == y + 1) {
                    if(y == 1) b += 6;
                    else b += x + y;
                }
                else a += x;
            }
        }

        cout << "Tessa " << a << " Danny " << b << "\n";
    }
}
