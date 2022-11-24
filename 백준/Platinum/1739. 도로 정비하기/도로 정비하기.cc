#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> adj, scc;
vector<int> nnum, cnum;
int ncnt = 0, ccnt = 0;

stack<int> s;
vector<bool> ch;

int y(int x) {
    if(x < 0) return (-x)*2 - 2;
    else return x*2 - 1;
}

int n(int x) {
    x = y(x);

    if(x % 2 == 0) return x + 1;
    else return x - 1;
}

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

    int T; cin >> T;

    while(T--) {
        int R, C, K; cin >> R >> C >> K;

        int N = R + C;

        adj.clear(); adj.resize(N*2);

        while(K--) {
            int bx, by, ex, ey; cin >> bx >> by >> ex >> ey;

            if(bx == ex && by < ey) adj[y(bx)].push_back(n(bx));
            else if(bx == ex && by > ey) adj[n(bx)].push_back(y(bx));
            else if(bx > ex && by == ey) adj[n(R+by)].push_back(y(R+by));
            else if(bx < ex && by == ey) adj[y(R+by)].push_back(n(R+by));
            else if(bx < ex && by < ey) {
                adj[y(bx)].push_back(n(ex));
                adj[y(ex)].push_back(n(bx));
                adj[y(bx)].push_back(n(R+by));
                adj[y(R+by)].push_back(n(bx));
                adj[y(ex)].push_back(n(R+ey));
                adj[y(R+ey)].push_back(n(ex));
                adj[y(R+ey)].push_back(n(R+by));
                adj[y(R+by)].push_back(n(R+ey));
            }
            else if(bx < ex && by > ey) {
                adj[n(bx)].push_back(y(ex));
                adj[n(ex)].push_back(y(bx));
                adj[n(bx)].push_back(n(R+by));
                adj[y(R+by)].push_back(y(bx));
                adj[n(ex)].push_back(n(R+ey));
                adj[y(R+ey)].push_back(y(ex));
                adj[y(R+ey)].push_back(n(R+by));
                adj[y(R+by)].push_back(n(R+ey));
            }
            else if(bx > ex && by < ey) {
                adj[y(bx)].push_back(n(ex));
                adj[y(ex)].push_back(n(bx));
                adj[y(bx)].push_back(y(R+by));
                adj[n(R+by)].push_back(n(bx));
                adj[y(ex)].push_back(y(R+ey));
                adj[n(R+ey)].push_back(n(ex));
                adj[n(R+ey)].push_back(y(R+by));
                adj[n(R+by)].push_back(y(R+ey));
            }
            else if(bx > ex && by > ey) {
                adj[n(bx)].push_back(y(ex));
                adj[n(ex)].push_back(y(bx));
                adj[n(bx)].push_back(y(R+by));
                adj[n(R+by)].push_back(y(bx));
                adj[n(ex)].push_back(y(R+ey));
                adj[n(R+ey)].push_back(y(ex));
                adj[n(R+ey)].push_back(y(R+by));
                adj[n(R+by)].push_back(y(R+ey));
            }
        }

        nnum.clear(); nnum.resize(N*2);
        cnum.clear(); cnum.resize(N*2);
        ch.clear();   ch.resize(N*2);

        scc.clear();
        ncnt = ccnt = 0;

        for(int i=0; i<N*2; i++)
            if(nnum[i] == 0) dfs(i);

        bool check = true;

        for(int i=0; i<N; i++) {
            if(cnum[i*2] == cnum[i*2 + 1]) {
                check = false;
                break;
            }
        }

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
