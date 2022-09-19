#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int a, b, c; cin >> a >> b >> c;

        int x = a * (b + c);

        if(a == b + c) x *= 2;

        ans = max(ans, x);
    }

    cout << ans << "\n";
}
