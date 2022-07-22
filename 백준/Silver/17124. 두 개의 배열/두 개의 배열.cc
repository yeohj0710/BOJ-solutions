#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N), u(M);
        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<M; i++) cin >> u[i];

        sort(u.begin(), u.end());

        vector<int> w(N);
        for(int i=0; i<N; i++) {
            int l = 0, r = M-1, diff = INT_MAX;

            while(l <= r) {
                int m = (l + r)/2;

                if(abs(v[i] - u[m]) < abs(diff)) {
                    w[i] = u[m];
                    diff = v[i] - u[m];
                }
                else if(abs(v[i] - u[m]) == abs(diff) && u[m] < w[i]) {
                    w[i] = u[m];
                }

                if(v[i] - u[m] == 0) break;

                if(v[i] - u[m] > 0) l = m + 1;
                else if(v[i] - u[m] < 0) r = m - 1;
            }
        }

        int sum = 0;
        for(int i=0; i<N; i++) sum += w[i];

        cout << sum << "\n";
    }
}
