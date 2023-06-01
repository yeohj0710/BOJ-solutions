#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int ans = 0;

    for(int i=1; i*i<=N-M; i++) {
        if((N - M) % i == 0) {
            if(i > M) ans += i;
            if(i*i != (N - M) && (N - M) / i > M) ans += (N - M) / i;
        }
    }

    cout << ans << "\n";
}
