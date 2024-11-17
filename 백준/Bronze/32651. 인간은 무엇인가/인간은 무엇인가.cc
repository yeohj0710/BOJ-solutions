#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    if(x <= 100000 && x % 2024 == 0) cout << "Yes\n";
    else cout << "No\n";
}
