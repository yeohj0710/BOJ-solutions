#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int ans = 1;
    while(b > 0) {
        if(b % 2 == 1) ans = (ans * a) % c;

        a = (a * a) % c;
        b /= 2;
    }

    cout << ans << "\n";
}
