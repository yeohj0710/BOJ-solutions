#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a == 0 && b == 0) {
        cout << 0 << "\n";
        return 0;
    }

    cout << a * b / (a + b) << "\n";
}
