#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;
    bool chk = true;

    for(int i=0; i<N; i++) {
        if(chk && v[i] % 2 == 0 || !chk && v[i] % 2 == 1) {
            ans++;
            chk = !chk;
        }
    }

    chk = true;
    int cnt = 0;

    for(int i=0; i<N; i++) {
        if(chk && v[i] % 2 == 1 || !chk && v[i] % 2 == 0) {
            cnt++;
            chk = !chk;
        }
    }

    ans = max(ans, cnt);

    cout << ans << "\n";
}
