#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<N; i++) {
        if(v[i] == M) {
            ans++;

            M += K;
        }
    }

    cout << ans << "\n";
}
