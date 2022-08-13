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
    int sum = 0;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            char c; cin >> c;

            int x;

            if(c == '0') continue;
            else if(c >= 'a' && c <= 'z') x = c - 'a' + 1;
            else if(c >= 'A' && c <= 'Z') x = c - 'A' + 27;

            adj.push_back({i, j, x});
            sum += x;
        }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    int ans = 0, cnt = 0;
    bool check = false;

    for(int i=0; i<adj.size(); i++) {
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

    if(N > 1 && !check) {
        cout << -1 << "\n";
        return 0;
    }

    ans = sum - ans;

    cout << ans << "\n";
}
