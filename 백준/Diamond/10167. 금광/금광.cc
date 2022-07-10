#include <bits/stdc++.h>
#define int long long
using namespace std;

struct p { int x, y, w; };
vector<p> v;

struct node { int lsum, rsum, sum, maxsum; };
vector<node> tree;

node mer(node a, node b) {
    int lsum = max(a.lsum, a.sum + b.lsum);
    int rsum = max(b.rsum, b.sum + a.rsum);
    int sum = a.sum + b.sum;
    int maxsum = max({a.maxsum, b.maxsum, a.rsum + b.lsum});

    return {lsum, rsum, sum, maxsum};
}

void upd(int n, int b, int e, int idx, int val) {
    if(idx < b || e < idx) return;

    tree[n].lsum += val;
    tree[n].rsum += val;
    tree[n].sum += val;
    tree[n].maxsum += val;

    if(b == e) return;

    upd(n*2, b, (b+e)/2, idx, val);
    upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

    tree[n] = mer(tree[n*2], tree[n*2 + 1]);
}

node query(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return {INT_MIN, INT_MIN, INT_MIN, INT_MIN};
    if(l <= b && e <= r) return tree[n];

    node ln = query(n*2, b, (b+e)/2, l, r);
    node rn = query(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return mer(ln, rn);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N+1);
    vector<pair<int, int>> vx(N+1), vy(N+1);

    for(int i=1; i<=N; i++) {
        cin >> v[i].x >> v[i].y >> v[i].w;

        vx[i] = {v[i].x, i};
        vy[i] = {v[i].y, i};
    }

    sort(vx.begin()+1, vx.end());
    sort(vy.begin()+1, vy.end());

    int xcnt = 1, ycnt = 1;

    for(int i=1; i<=N; i++) {
        if(i > 1 && vx[i].first > vx[i-1].first) xcnt++;

        v[vx[i].second].x = xcnt;
    }
    for(int i=1; i<=N; i++) {
        if(i > 1 && vy[i].first > vy[i-1].first) ycnt++;

        v[vy[i].second].y = ycnt;
    }

    vector<vector<int>> u(N+1, vector<int>(N+1));
    vector<vector<pair<int, int>>> uy(N+1);

    for(int i=1; i<=N; i++) {
        u[v[i].x][v[i].y] = v[i].w;
        uy[v[i].y].push_back({v[i].x, v[i].w});
    }

    int ans = INT_MIN;
    for(int i=1; i<=ycnt; i++) {
        tree.clear();
        tree.resize((N+1)*4);

        for(int j=i; j<=ycnt; j++) {
            for(int k=0; k<uy[j].size(); k++)
                upd(1, 1, N, uy[j][k].first, uy[j][k].second);

            ans = max(ans, query(1, 1, N, 1, N).maxsum);
        }
    }

    cout << ans << "\n";
}
