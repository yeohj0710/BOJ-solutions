#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a > b) swap(a, b);

    cout << (b + 1) / 2 << " " << a << "\n";
}
