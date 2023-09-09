#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c; cin >> a >> b >> c;

    if(a >= 1000 && (b >= 8000 || c >= 260)) cout << "Very Good\n";
    else if(a >= 1000) cout << "Good\n";
    else cout << "Bad\n";
}
