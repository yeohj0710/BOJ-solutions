#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(N);

    if(N >= 2) {
        u[0] = abs(v[0] - v[1]);
        u[N-1] = abs(v[N-1] - v[N-2]);
    }

    for(int i=1; i<N-1; i++)
        u[i] = max(abs(v[i] - v[i-1]), abs(v[i] - v[i+1]));

    int l = 0, r = INT_MAX, ans = INT_MAX;

    while(l <= r) {
        int m = (l + r) / 2, cnt = 0;

        for(int i=0; i<N; i++)
            if(u[i] > m) cnt++;

        if(cnt <= M) {
            ans = m;
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
 }
