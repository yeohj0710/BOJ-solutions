#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x = 0;

    for(int i=0; i<5; i++) {
        int a, b; cin >> a >> b;

        x += a * b;
    }

    x /= 5;

    int a, b; cin >> a >> b;

    cout << x * a / b << "\n";
}
