#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int cnt = 1, x = 0;
    while(true) {
        if(v[x] == M) {
            cout << cnt << "\n";
            return 0;
        }

        x = v[x];

        cnt++;
        if(cnt > N) break;
    }

    cout << -1 << "\n";
}
