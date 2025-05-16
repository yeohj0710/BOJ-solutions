#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    if(d > e) swap(d, e);

    if(e <= b || d >= c) cout << "Outside";
    else if(b < d && e < c) cout << "City";
    else cout << "Full";

    cout << "\n";
}
