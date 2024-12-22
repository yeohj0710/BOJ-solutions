#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a <= b + c + d || a <= 240) cout << "high speed rail\n";
    else cout << "flight\n";
}
