#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(M);
    int ans = K;

    for(int i=0; i<M; i++) cin >> v[i];
    for(int i=0; i<K; i++) {
        int x; cin >> x;

        N += x;
    }

    for(int i=0; i<M; i++) {
        if(v[i] <= N) {
            N -= v[i];
            ans++;
        }
        else break;
    }

    cout << ans << "\n";
}
