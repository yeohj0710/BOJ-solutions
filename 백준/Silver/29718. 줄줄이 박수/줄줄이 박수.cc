#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(M+1);

    for(int i=0; i<N; i++)
        for(int j=1; j<=M; j++) {
            int x; cin >> x;

            v[j] += x;
        }

    for(int i=1; i<=M; i++) v[i] += v[i-1];

    int K; cin >> K;

    int ans = 0;

    for(int i=K; i<=M; i++) ans = max(ans, v[i] - v[i-K]);

    cout << ans << "\n";
}
