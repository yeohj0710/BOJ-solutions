#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int r = 0, w = 0;

        while(M--) {
            int a, b; cin >> a >> b;

            r = max(r, a);
            w = max(w, b);
        }

        if(r + w > N) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        for(int i=0; i<r; i++) cout << "R";
        for(int i=0; i<N-r; i++) cout <<"W";
        cout << "\n";
    }
}
