#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

        if(abs(b - d) + abs(c - e) <= a) cout << "First 1\n";
        else cout << "Infinity\n";
    }
}
