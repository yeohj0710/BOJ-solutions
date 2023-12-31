#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int ans = (N * 2 + 1) * (N * 2 + 1);

    for(int i=-N; i<=N; i++) {
        if(i == 0) continue;

        for(int j=-N; j<=N; j++)
            if(1 - i - j >= -N && 1 - i - j <= N) ans++;
    }

    cout << ans << "\n";
}
