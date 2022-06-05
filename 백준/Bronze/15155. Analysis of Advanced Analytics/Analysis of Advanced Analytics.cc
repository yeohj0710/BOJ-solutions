#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cur = 0, ans = 1;
    for(int i=0; i<N; i++) {
        if(cur + v[i] > M) {
            cur = v[i];
            ans++;
        }
        else cur += v[i];
    }

    cout << ans << "\n";
}
