#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    string c = a + b;

    sort(c.begin(), c.end());

    cout << c << "\n";
}
