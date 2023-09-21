#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) {
        int M; cin >> M;

        while(M--) {
            int x; cin >> x;

            v[i] += x;
        }
    }

    sort(v.begin(), v.end());

    for(int i=1; i<N; i++) v[i] += v[i-1];

    int ans = 0;

    for(int i=0; i<N; i++) ans += v[i];

    cout << ans << "\n";
}
