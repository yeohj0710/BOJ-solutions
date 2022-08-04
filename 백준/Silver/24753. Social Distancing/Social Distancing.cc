#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    if(M == 1) {
        cout << N/2 - 1 << "\n";
        return 0;
    }

    int ans = 0;

    for(int i=0; i<M-1; i++) {
        int x = v[i+1] - v[i] - 1;

        ans += (x - 1) / 2;
    }

    int x = v[0] + N - v[M-1] - 1;

    ans += (x - 1) / 2;

    cout << ans << "\n";
}
