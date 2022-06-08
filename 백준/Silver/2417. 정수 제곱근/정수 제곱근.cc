#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N == 0) {
        cout << 0 << "\n";
        return 0;
    }

    int l = 0, r = LLONG_MAX;
    __int128 ans;

    while(l+1 < r) {
        __int128 m = (l + r)/2;

        if(m*m >= (__int128)N) {
            ans = m;
            r = m;
        }
        else l = m;
    }

    int x = (int)ans;

    cout << x << "\n";
}
