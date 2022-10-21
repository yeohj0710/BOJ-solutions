#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj;
vector<int> l, r;
vector<bool> vis;

bool f(int x) {
    vis[x] = true;

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(r[y] == -1 || (!vis[r[y]] && f(r[y]))) {
            l[x] = y, r[y] = x;

            return true;
        }
    }

    return false;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<vector<bool>> v(N+1, vector<bool>(M+1, true));

        int K; cin >> K;

        while(K--) {
            int x, y; cin >> x >> y;

            v[x][y] = false;
        }

        adj.clear();
        adj.resize(N*M + 1);

        for(int i=1; i<=N; i++)
            for(int j=!(i%2)+1; j<=M; j+=2) {
                if(!v[i][j]) continue;

                int di[4] = {1, -1, 0, 0};
                int dj[4] = {0, 0, 1, -1};

                for(int k=0; k<4; k++) {
                    int ni = i + di[k];
                    int nj = j + dj[k];

                    if(ni < 1 || nj < 1 || ni > N || nj > M) continue;
                    if(!v[ni][nj]) continue;

                    adj[((i-1)*M+j+1)/2].push_back(((ni-1)*M+nj+1)/2);
                }
            }

        int s = (N*M + 1) / 2;

        l.clear();
        l.resize(s+1, -1);

        r.clear();
        r.resize(s+1, -1);

        int ans = 0;

        for(int i=1; i<=s; i++) {
            vis.clear();
            vis.resize(s+1);

            if(f(i)) ans++;
        }

        cout << ans << "\n";
    }
}
