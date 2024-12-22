#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;

        int x = b - a;

        if(x < 0) x += 43;

        int y = a - b;

        if(y < 0) y += 43;

        if(x < y) cout << "Inner circle line\n";
        else if(x > y) cout << "Outer circle line\n";
        else cout << "Same\n";
    }
}
