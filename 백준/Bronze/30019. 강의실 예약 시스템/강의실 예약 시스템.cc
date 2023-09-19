#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(b >= v[a]) {
            cout << "YES\n";

            v[a] = c;
        }
        else cout << "NO\n";
    }
}
