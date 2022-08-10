#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 1;

    for(int i=0; i<N-2; i++) {
        int x; cin >> x;

        ans = ans * x / __gcd(ans, x);
    }

    cout << ans << "\n";
}
