#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        double x, y; cin >> x >> y;

        if(x == 0 || y == 0) cout << "AXIS\n";
        else if(x > 0 && y > 0) cout << "Q1\n";
        else if(x < 0 && y > 0) cout << "Q2\n";
        else if(x < 0 && y < 0) cout << "Q3\n";
        else if(x > 0 && y < 0) cout << "Q4\n";

        if(x == 0 && y == 0) break;
    }
}
