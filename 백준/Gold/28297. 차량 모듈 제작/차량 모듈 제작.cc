#include <bits/stdc++.h>
#define int long long
using namespace std;

struct ss { double x, y, r; };

bool circle_cmp(ss a, ss b) { return a.r > b.r; }

struct s { double a, b, c; };

bool cmp(s x, s y) { return x.c < y.c; }

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<ss> u(N+1);

    for(int i=1; i<=N; i++)
        cin >> u[i].x >> u[i].y >> u[i].r;

    sort(u.begin()+1, u.end(), circle_cmp);

    vector<s> adj;

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            double d = sqrt(pow(u[i].x - u[j].x, 2) + pow(u[i].y - u[j].y, 2));

            if(d <= u[i].r + u[j].r) {
                adj.push_back({i, j, 0});
                continue;
            }

            double x = sqrt(pow(d, 2) - pow(abs(u[i].r - u[j].r), 2));

            double th = acos(abs(u[i].r - u[j].r) / d);

            adj.push_back({i, j, u[i].r * 2 * (M_PI - th) + u[j].r * 2 * th + x * 2});
        }

    sort(adj.begin(), adj.end(), cmp);

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    double ans = 0, cnt = 0;

    for(int i=0; i<adj.size(); i++) {
        double a = adj[i].a, b = adj[i].b, c = adj[i].c;

        if(f(a) == f(b)) continue;

        v[f(a)] = f(b);

        ans += c;
        cnt++;

        if(cnt == N-1) break;
    }

    cout << fixed << setprecision(6);
    cout << ans << "\n";
}
