#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    if(n >= -32768 && n <= 32767) cout << "short\n";
    else if(n >= -2147483648 && n <= 2147483647) cout << "int\n";
    else cout << "long long\n";
}
