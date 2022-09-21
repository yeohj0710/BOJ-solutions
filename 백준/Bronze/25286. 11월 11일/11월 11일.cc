#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        if(b == 1) cout << a - 1 << " ";
        else cout << a << " ";

        if(b == 1) cout << 12 << " ";
        else cout << b - 1 << " ";

        if(b == 3 && ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)) cout << 29 << "\n";
        else if(b == 3) cout << 28 << "\n";
        else if(b == 2 || b == 4 || b == 6 || b == 8 || b == 9 || b == 11 || b == 1) cout << 31 << "\n";
        else cout << 30 << "\n";
    }
}
