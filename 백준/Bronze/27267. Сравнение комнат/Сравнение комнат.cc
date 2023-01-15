#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c, d; cin >> a >> b >> c >> d;

    if(a*b > c*d) cout << "M\n";
    else if(a*b < c*d) cout << "P\n";
    else cout << "E\n";
}
