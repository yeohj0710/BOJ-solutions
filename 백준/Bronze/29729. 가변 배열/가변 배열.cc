#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x, N, M; cin >> x >> N >> M;

    int y = 0;

    for(int i=0; i<N+M; i++) {
        int a; cin >> a;

        if(a == 1) {
            y++;

            if(y > x) x *= 2;
        }
        else y--;
    }

    cout << x << "\n";
}
