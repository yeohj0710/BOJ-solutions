#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) {
            cin >> v[i];

            v[i] += v[i-1];
        }

        while(M--) {
            int a, b; cin >> a >> b;

            cout << v[b+1] - v[a] << "\n";
        }
        cout << "\n";
    }
}
