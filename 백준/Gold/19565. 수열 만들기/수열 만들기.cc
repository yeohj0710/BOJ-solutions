#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<int> v;

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] += val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = v[n*2] + v[n*2 + 1];
    }

    int sum(int n, int b, int e, int l, int r) {
        if(r < b || e < l) return 0;
        if(l <= b && e <= r) return v[n];

        return sum(n*2, b, (b+e)/2, l, r)
                + sum(n*2 + 1, (b+e)/2 + 1, e, l, r);
    }

    int kth(int n, int b, int e, int ran) {
        if(b == e) return b;

        if(ran <= v[n*2]) return kth(n*2, b, (b+e)/2, ran);
        else return kth(n*2+1, (b+e)/2+1, e, ran-v[n*2]);
    }
};

struct EulerianPath {
    segmentTree adj[1001];

    int N, start = 0;
    stack<int> s;

    void init() {
        cin >> N;

        for(int i=1; i<=N; i++) adj[i].v.resize(N*4);

        for(int i=1; i<=N; i++)
            for(int j=i; j<=N; j++) {
                adj[i].upd(1, 1, N, j, 1);
                adj[j].upd(1, 1, N, i, 1);

                if(i != j) {
                    adj[i].upd(1, 1, N, j, 1);
                    adj[j].upd(1, 1, N, i, 1);
                }
            }
    }

    bool exist() {
        int cnt = 0;

        for(int i=1; i<=N; i++) {
            int sum = adj[i].sum(1, 1, N, 1, N);

            if(sum % 2 == 1) cnt++;
            if(start == 0 && sum > 0) start = i;
        }

        if(cnt == 0) return true;

        return false;
    }

    void dfs(int x) {
        while(adj[x].sum(1, 1, N, 1, N) > 0) {
            int y = adj[x].kth(1, 1, N, 1);

            adj[x].upd(1, 1, N, y, -1);
            adj[y].upd(1, 1, N, x, -1);

            dfs(y);
        }

        s.push(x);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    EulerianPath f; f.init();

    if(!f.exist()) {
        cout << -1 << "\n";
        return 0;
    }

    f.dfs(f.start);

    cout << f.s.size() << "\n";

    while(!f.s.empty()) {
        cout << f.s.top() << " ";
        f.s.pop();
    }
    cout << "\n";
}
