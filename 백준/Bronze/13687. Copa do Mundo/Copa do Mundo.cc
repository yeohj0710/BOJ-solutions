#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        int ans = M*3;

        while(N--) {
            string str; cin >> str;
            int x; cin >> x;

            ans -= x;
        }

        cout << ans << "\n";
    }
}
