#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int c = b * (b + 1) / 2 * 29260;

    int d = a - c;

    int e = d / 110;

    cout << e << "\n";
}
