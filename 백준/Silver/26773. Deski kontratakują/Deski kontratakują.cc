#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 1, r = 1e9, len = 0;

    while(l <= r) {
        int m = (l + r) / 2;

        int cnt = 0;

        for(int i=0; i<N; i++) cnt += v[i] / m;

        if(cnt >= 4) {
            len = max(len, m);
            l = m + 1;
        }
        else r = m - 1;
    }

    cout << len * len << "\n";
}
