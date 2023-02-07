#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x, int y, int i) {
    if(i == 0) return x + y;
    else if(i == 1) return x - y;
    else if(i == 2) return x * y;
    else if(i == 3) {
        if(x % y == 0) return x / y;
        else return INT_MAX;
    }
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    int ans = INT_MAX;

    for(int i=0; i<4; i++) {
        int d = f(a, b, i);

        for(int j=0; j<4; j++) {
            int e = f(d, c, j);

            if(e >= 0) ans = min(ans, e);
        }
    }

    cout << ans << "\n";
}
