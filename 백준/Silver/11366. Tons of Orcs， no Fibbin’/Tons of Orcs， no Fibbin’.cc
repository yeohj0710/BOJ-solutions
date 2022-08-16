#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, N; cin >> a >> b >> N;
        if(a == 0 && b == 0 && N == 0) break;

        if(a == 0 && b == 0) {
            cout << 0 << "\n";
            continue;
        }

        int ans = a + b;
        N--;

        while(N--) {
            a = b;
            b = ans;
            ans = a + b;
        }

        cout << ans << "\n";
    }
}
