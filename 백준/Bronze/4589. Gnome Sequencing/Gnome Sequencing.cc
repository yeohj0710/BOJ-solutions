#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    cout << "Gnomes:\n";

    while(T--) {
        int a, b, c; cin >> a >> b >> c;

        if((a < b && b < c) || (a > b && b > c)) cout << "Ordered\n";
        else cout << "Unordered\n";
    }
}
