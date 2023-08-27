#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int x) {
    int ret = 0;

    for(int i=1; i<=x; i++) ret += i * (x / i);

    return ret;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    cout << f(b) - f(a-1) << "\n";
}
