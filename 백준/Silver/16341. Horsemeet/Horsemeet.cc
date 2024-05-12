#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;

    int sum = abs(a - c) + abs(b - d);

    if(sum % 2 == 1) cout << "white\n";
    else cout << "black\n";
}
