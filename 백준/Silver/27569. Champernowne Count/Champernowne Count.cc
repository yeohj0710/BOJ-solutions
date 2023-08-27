#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    int cur = 0, ans = 0;

    for(int i=1; i<=N; i++) {
        int len = to_string(i).length();

        for(int j=0; j<len; j++) cur *= 10;

        cur = (cur + i) % M;

        if(cur == 0) ans++;
    }

    cout << ans << "\n";
}
