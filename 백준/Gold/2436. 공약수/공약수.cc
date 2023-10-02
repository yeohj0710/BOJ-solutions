#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int g, l; cin >> g >> l;

    int mul = l / g, mn = INT_MAX, a, b;

    for(int i=1; i*i<=mul; i++) {
        if(mul % i != 0) continue;
        if(__gcd(i, mul / i) != 1) continue;

        if(i + mul / i < mn) {
            mn = i + mul / i;
            a = i, b = mul / i;
        }
    }

    cout << a * g << " " << b * g << "\n";
}
