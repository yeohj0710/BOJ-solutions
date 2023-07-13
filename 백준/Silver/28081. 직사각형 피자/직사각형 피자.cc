#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int W, H, K; cin >> W >> H >> K;

    int N; cin >> N;

    int pre = 0, cur;
    vector<int> v;

    for(int i=0; i<N; i++) {
        cin >> cur;

        v.push_back(cur - pre);

        pre = cur;
    }

    v.push_back(H - pre);

    int M; cin >> M;

    pre = 0;
    vector<int> u;

    for(int i=0; i<M; i++) {
        cin >> cur;

        u.push_back(cur - pre);

        pre = cur;
    }

    u.push_back(W - pre);

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int ans = 0;

    for(int i=0; i<v.size(); i++) {
        int l = 0, r = u.size()-1, idx = -1;

        while(l <= r) {
            int m = (l + r) / 2;

            if(v[i] * u[m] <= K) {
                idx = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        if(idx != -1) ans += idx + 1;
    }

    cout << ans << "\n";
 }
