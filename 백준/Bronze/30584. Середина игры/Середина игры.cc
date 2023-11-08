#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if((a + b) % 2 != 0) {
        cout << "Error\n";
        return 0;
    }

    if(a >= 2 && b >= 2) {
        cout << "Undefined\n";
        return 0;
    }

    cout << a / 2 << "\n";
    cout << b / 2 << "\n";
    cout << a % 2 << "\n";
}
