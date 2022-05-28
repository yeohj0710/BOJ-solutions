#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

        if((c-e <= 1 && c+e >= a) || (d-e <= 1 && d+e >= b)) cout << "Tuzik\n";
        else if((c-e <= 1 && d-e <= 1) || (c+e >= a && d+e >= b)) cout << "Tuzik\n";
        else cout << "Barsik\n";
    }
}
