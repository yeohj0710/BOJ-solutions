#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, a, b, c; cin >> N >> a >> b >> c;

    int ans;

    if(a <= b && a <= c) ans = (N - 1) * a;
    else if(b <= a && b <= c) ans = (N - 1) * b;
    else {
        if(N == 1) {
            if(a <= b) ans = a;
            else ans = b;
        }
        else if(a <= b) ans = a + (N - 2) * c;
        else ans = b + (N - 2) * c;
    }

    cout << ans / 100 << " " << ans % 100 << "\n";
}
