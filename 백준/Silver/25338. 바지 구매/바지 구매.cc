#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int x, y; cin >> x >> y;

        if(y >= b && a * (y - b) * (y - b) + c == x) ans++;
    }

    cout << ans << "\n";
}
