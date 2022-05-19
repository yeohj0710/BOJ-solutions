#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int t, b, n; cin >> t >> b >> n;

        int sum = 0;
        while(n > 0) {
            sum += (n % b) * (n % b);

            n /= b;
        }

        cout << t << " " << sum << "\n";
    }
}
