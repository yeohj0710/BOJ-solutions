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

    int N, M, K; cin >> N >> M >> K;

    vector<s> adj(M);

    for(int i=0; i<M; i++) {
        cin >> adj[i].a >> adj[i].b;

        adj[i].c = i+1;
    }

    sort(adj.begin(), adj.end(), cmp);

    for(int j=0; j<K; j++) {
        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        int ans = 0, cnt = 0;
        bool check = false;

        for(int i=j; i<M; i++) {
            int a = adj[i].a, b = adj[i].b, c = adj[i].c;

            if(f(a) == f(b)) continue;

            v[f(a)] = f(b);

            ans += c;
            cnt++;

            if(cnt == N-1) {
                check = true;
                break;
            }
        }

        if(check) cout << ans << " ";
        else cout << 0 << " ";
    }
    cout << "\n";
}
