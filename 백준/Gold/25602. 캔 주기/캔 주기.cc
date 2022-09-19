#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> w(N);
    for(int i=0; i<N; i++) cin >> w[i];

    vector<vector<int>> v(M, vector<int>(N));
    vector<vector<int>> u(M, vector<int>(N));

    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++) cin >> u[i][j];

    int ans = 0;

    for(int i=0; i<pow(N, M); i++)
        for(int j=0; j<pow(N, M); j++) {
            vector<int> vv;
            int ti = i;

            for(int k=0; k<M; k++) {
                vv.push_back(ti % N);
                ti /= N;
            }

            vector<int> uu;
            int tj = j;

            for(int k=0; k<M; k++) {
                uu.push_back(tj % N);
                tj /= N;
            }

            vector<int> cnt(N);
            for(int k=0; k<M; k++) cnt[vv[k]]++, cnt[uu[k]]++;

            bool check = true;
            for(int k=0; k<N; k++)
                if(cnt[k] > w[k]) check = false;
            if(!check) continue;

            int sum = 0;

            for(int k=0; k<M; k++) sum += v[k][vv[k]] + u[k][uu[k]];

            ans = max(ans, sum);
        }

    cout << ans << "\n";
}
