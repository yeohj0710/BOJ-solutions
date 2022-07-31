#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 1;

    while(N--) {
        int x; cin >> x;

        if(x > 0) ans = (ans * x) % M;
    }

    ans = ans % M;

    cout << ans << "\n";
}
