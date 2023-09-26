#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, cur; cin >> N >> M >> cur;

    while(true) {
        int x; cin >> x;

        if(x == M / 2 + 1) {
            cout << 0 << "\n";
            break;
        }

        x -= (M / 2 + 1);
        cur += x;

        while(cur < 1) cur += N;
        while(cur > N) cur -= N;

        cout << cur << "\n";
    }
}
