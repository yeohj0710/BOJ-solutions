#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    if(a == 0) cout << c * c - b << "\n";
    else if(b == 0) cout << c * c - a << "\n";
    else if(c == 0) cout << (int)sqrt(a + b) << "\n";
}
