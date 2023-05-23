#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double a, b; cin >> a >> b;

    b += a / 2;

    while(b >= a*2) b -= a*2;

    cout << ((b < a) ? "up" : "down") << "\n";
}
