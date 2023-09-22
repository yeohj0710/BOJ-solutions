#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N, M; cin >> N >> M;

        if(N == 0 && M == 0) break;

        vector<int> v(1e4 + 1);

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                int x; cin >> x;

                v[x]++;
            }

        vector<int> u(v);

        sort(u.begin(), u.end(), greater<int>());

        if(u[1] == u[0] || u[1] == 0) {
            cout << "\n";
            continue;
        }

        for(int i=1; i<=1e4; i++)
            if(v[i] == u[1]) cout << i << " ";
        cout << "\n";
    }
}
