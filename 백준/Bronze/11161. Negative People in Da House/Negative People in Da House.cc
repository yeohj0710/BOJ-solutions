#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int cur = 0, Min = 0;

        while(N--) {
            int a, b; cin >> a >> b;

            cur = cur + a - b;

            Min = min(Min, cur);
        }

        if(Min < 0) cout << -Min << "\n";
        else cout << 0 << "\n";
    }
}

