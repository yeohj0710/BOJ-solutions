#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, scc;
vector<int> nnum, cnum;
int ncnt = 0, ccnt = 0;

stack<int> s;
vector<bool> ch;

int dfs(int x) {
    nnum[x] = ++ncnt;
    s.push(x);

    int tmp = nnum[x];

    for(int i=0; i<adj[x].size(); i++) {
        int y = adj[x][i];

        if(nnum[y] == 0) tmp = min(tmp, dfs(y));
        else if(!ch[y]) tmp = min(tmp, nnum[y]);
    }

    if(tmp == nnum[x]) {
        vector<int> v;
        ccnt++;

        while(true) {
            int y = s.top();
            s.pop();

            v.push_back(y);

            ch[y] = true;
            cnum[y] = ccnt;

            if(y == x) break;
        }

        sort(v.begin(), v.end());

        scc.push_back(v);
    }

    return tmp;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int C, R; cin >> C >> R;

    vector<vector<int>> v(R+1, vector<int>(C+1));

    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++) cin >> v[i][j];

    int N = R * C;

    adj.resize(N+1);

    int di[4] = {1, -1, 0, 0};
    int dj[4] = {0, 0, 1, -1};

    for(int i=1; i<=R; i++)
        for(int j=1; j<=C; j++)
            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni <= 0 || nj <= 0 || ni > R || nj > C) continue;

                if(v[i][j] >= v[ni][nj]) adj[(i-1)*C + j].push_back((ni-1)*C + nj);
            }

    nnum.resize(N+1);
    cnum.resize(N+1);
    ch.resize(N+1);

    for(int i=1; i<=N; i++)
        if(nnum[i] == 0) dfs(i);

    sort(scc.begin(), scc.end());

    if(ccnt == 1) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> ind(N+1), oud(N+1);

    for(int i=1; i<=N; i++)
        for(int j=0; j<adj[i].size(); j++) {
            int x = adj[i][j];

            if(cnum[i] != cnum[x]) {
                ind[cnum[x]]++;
                oud[cnum[i]]++;
            }
        }

    int incnt = 0, oucnt = 0;
    for(int i=1; i<=ccnt; i++) {
        if(ind[i] == 0) incnt++;
        if(oud[i] == 0) oucnt++;
    }

    int ans = max(incnt, oucnt);

    cout << ans << "\n";
}
