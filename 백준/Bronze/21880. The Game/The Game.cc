#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int a, b; cin >> a >> b;

    if(a < b) {
        for(int i=1; i<=a; i++)
            cout << i << ":" << 0 << "\n";

        for(int i=1; i<=b; i++)
            cout << a << ":" << i << "\n";
    }
    else {
        for(int i=1; i<=b; i++)
            cout << 0 << ":" << i << "\n";

        for(int i=1; i<=a; i++)
            cout << i << ":" << b << "\n";
    }
}
