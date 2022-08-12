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

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<s> adj;

        for(int i=0; i<N-1; i++) {
            char a; cin >> a;
            int M; cin >> M;

            while(M--) {
                char b; cin >> b;
                int c; cin >> c;

                adj.push_back({a-'A'+1, b-'A'+1, c});
            }
        }

        sort(adj.begin(), adj.end(), cmp);

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        int ans = 0, cnt = 0;

        for(int i=0; i<adj.size(); i++) {
            int a = adj[i].a, b = adj[i].b, c = adj[i].c;

            if(f(a) == f(b)) continue;

            v[f(a)] = f(b);

            ans += c;
            cnt++;

            if(cnt == N-1) break;
        }

        cout << ans << "\n";
    }
}
