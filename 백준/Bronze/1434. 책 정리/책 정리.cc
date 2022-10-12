#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int a = 0;

    while(N--) {
        int x; cin >> x;

        a += x;
    }

    int b = 0;

    while(M--) {
        int x; cin >> x;

        b += x;
    }

    int ans = a - b;

    cout << ans << "\n";
}
