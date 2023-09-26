#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;

    for(int i=0; i<K; i++)
        for(int j=0; j<K; j++) {
            vector<int> u(26);

            for(int ii=i; ii<N; ii+=K)
                for(int jj=j; jj<M; jj+=K) u[v[ii][jj] - 'A']++;

            int mx = 0, idx = -1, sum = 0;

            for(int k=0; k<26; k++) {
                sum += u[k];

                if(u[k] > mx) {
                    mx = u[k];
                    idx = k;
                }
            }

            ans += sum - mx;

            for(int ii=i; ii<N; ii+=K)
                for(int jj=j; jj<M; jj+=K) v[ii][jj] = 'A' + idx;
        }

    cout << ans << "\n";

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j];
        cout << "\n";
    }
}
