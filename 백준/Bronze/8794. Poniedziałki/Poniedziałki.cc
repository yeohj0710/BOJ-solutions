#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        if(c == 1) {
            if(a % b == 0) cout << a/b << "\n";
            else cout << a/b + 1 << "\n";
        }
        else {
            a -= (b - (c - 1));

            if(a % b == 0) cout << a/b << "\n";
            else cout << a/b + 1 << "\n";
        }
    }
}
