#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    double ans = 0;
    while(N--) {
        double x; cin >> x;
        if(x == 0) {
            ans += 2;
            continue;
        }

        ans += 1/x;
    }

    cout << fixed;
    cout.precision(6);

    cout << ans << "\n";
}
