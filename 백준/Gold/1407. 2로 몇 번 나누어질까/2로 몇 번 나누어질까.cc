#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x) {
    int ret = x, cur = 2;

    while(cur <= x) {
        ret += (cur / 2) * (x / cur);
        cur *= 2;
    }

    return ret;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    cout << f(b) - f(a-1) << "\n";
}
