#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, d; cin >> a >> d;

    int N; cin >> N;

    while(N--) {
        int Q, l, r; cin >> Q >> l >> r;

        if(Q == 1) cout << a*(r-l+1) + ((r-1)*r/2 - (l-2)*(l-1)/2)*d << "\n";
        else if(Q == 2) {
            if(l == r) cout << a + (l-1)*d << "\n";
            else cout << __gcd(a + (l-1)*d, a + l*d) << "\n";
        }
    }
}
