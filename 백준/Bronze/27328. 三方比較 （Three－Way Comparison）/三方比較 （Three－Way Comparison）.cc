#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a < b) cout << -1 << "\n";
    else if(a == b) cout << 0 << "\n";
    else if(a > b) cout << 1 << "\n";
}
