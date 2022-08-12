#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<s> adj;

        for(int i=1; i<=N; i++)
            for(int j=1; j<M; j++) {
                int x; cin >> x;

                adj.push_back({(i-1)*M + j, (i-1)*M + (j+1), x});
            }

        for(int i=1; i<N; i++)
            for(int j=1; j<=M; j++) {
                int x; cin >> x;

                adj.push_back({(i-1)*M + j, i*M + j, x});
            }

        sort(adj.begin(), adj.end(), cmp);

        v.clear();
        v.resize(N*M + 1);
        for(int i=1; i<=N*M; i++) v[i] = i;

        int ans = 0, cnt = 0;

        for(int i=0; i<adj.size(); i++) {
            int a = adj[i].a, b = adj[i].b, c = adj[i].c;

            if(f(a) == f(b)) continue;

            v[f(a)] = f(b);

            ans += c;
            cnt++;

            if(cnt == N*M - 1) break;
        }

        cout << ans << "\n";
    }
}
