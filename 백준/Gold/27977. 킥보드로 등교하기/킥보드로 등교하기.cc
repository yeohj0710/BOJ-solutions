#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int L, N, M; cin >> L >> N >> M;

    vector<int> v(N+2);
    for(int i=1; i<=N; i++) cin >> v[i];

    v[N+1] = L;

    int l = 1, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2;

        bool chk = false;

        for(int i=1; i<v.size(); i++)
            if(v[i] - v[i-1] > m) chk = true;

        if(chk) {
            l = m + 1;
            continue;
        }

        int sum = 0, pre = 0;

        for(int i=1; i<v.size(); i++) {
            if(v[i] - pre > m) {
                sum++;
                pre = v[i-1];
            }
        }

        if(sum <= M) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
