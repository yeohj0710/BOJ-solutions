#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int cur; cin >> cur;

    int ans = 1;

    cur += M;

    for(int i=0; i<N-1; i++) {
        int x; cin >> x;

        if(x > cur) {
            cur = x + M;
            ans++;
        }
    }

    cout << ans << "\n";
}
