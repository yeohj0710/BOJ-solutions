#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans, mx = 0;

    for(int i=1; i<=N; i++) {
        int cnt = 0;

        for(int j=1; j*j<=i; j++) {
            if(i % j != 0) continue;

            cnt++;

            if(j*j < i) cnt++;
        }

        if(cnt > mx) {
            mx = cnt;
            ans = i;
        }
    }

    cout << ans << "\n";
    cout << mx << "\n";
}
