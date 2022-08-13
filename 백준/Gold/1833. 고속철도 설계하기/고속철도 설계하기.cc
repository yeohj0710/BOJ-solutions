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

    int N; cin >> N;

    vector<s> adj;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int ans = 0, cnt = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            int x; cin >> x;

            if(i >= j) continue;

            if(x < 0) {
                if(f(i) != f(j)) {
                    v[f(i)] = f(j);

                    cnt++;
                }

                ans += abs(x);
            }
            else if(x > 0) adj.push_back({i, j, x});
        }

    if(cnt >= N-1) {
        cout << ans << " " << 0 << "\n";
        return 0;
    }

    sort(adj.begin(), adj.end(), cmp);

    vector<pair<int, int>> w;

    for(int i=0; i<adj.size(); i++) {
        int a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        w.push_back({a, b});

        if(cnt == N-1) break;
    }

    cout << ans << " " << w.size() << "\n";

    for(int i=0; i<w.size(); i++)
        cout << w[i].first << " " << w[i].second << "\n";
}
