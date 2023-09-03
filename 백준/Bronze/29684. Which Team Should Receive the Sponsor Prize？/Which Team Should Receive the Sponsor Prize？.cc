#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        int ans, mn = INT_MAX;

        for(int i=1; i<=N; i++) {
            int x; cin >> x;

            if(abs(x - 2023) < mn) {
                ans = i;
                mn = abs(x - 2023);
            }
        }

        cout << ans << "\n";
    }
}
