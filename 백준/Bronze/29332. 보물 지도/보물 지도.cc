#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int r = INT_MAX, l = INT_MIN, d = INT_MIN, u = INT_MAX;

    int N; cin >> N;

    while(N--) {
        int x, y; char ch; cin >> x >> y >> ch;

        if(ch == 'L') r = min(r, x - 1);
        else if(ch == 'R') l = max(l, x + 1);
        else if(ch == 'U') d = max(d, y + 1);
        else if(ch == 'D') u = min(u, y - 1);
    }

    if(r == INT_MAX || l == INT_MIN || d == INT_MIN || u == INT_MAX) {
        cout << "Infinity" << "\n";
    }
    else cout << (r - l + 1) * (u - d + 1) << "\n";
}
