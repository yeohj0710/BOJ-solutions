#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    a--;

    cout << min(a, b) * 2 + 1 << "\n";
}
