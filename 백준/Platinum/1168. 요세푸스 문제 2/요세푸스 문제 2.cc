#include <bits/stdc++.h>
#define int long long
using namespace std;

struct segmentTree {
    vector<int> v;

    void upd(int n, int b, int e, int idx, int val) {
        if(b == e) {
            v[n] = val;
            return;
        }

        if(idx <= (b+e)/2) upd(n*2, b, (b+e)/2, idx, val);
        else upd(n*2 + 1, (b+e)/2 + 1, e, idx, val);

        v[n] = v[n*2] + v[n*2 + 1];
    }

    int kth(int n, int b, int e, int ran) {
        if(b == e) return b;

        if(ran <= v[n*2]) return kth(n*2, b, (b+e)/2, ran);
        else return kth(n*2+1, (b+e)/2+1, e, ran-v[n*2]);
    }
};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    segmentTree f; f.v.resize(N*4);

    for(int i=1; i<=N; i++) f.upd(1, 1, N, i, 1);

    int cur = M;

    cout << "<";

    for(int i=1; i<=N; i++) {
        int x = f.kth(1, 1, N, cur);

        cout << x;

        f.upd(1, 1, N, x, 0);

        if(i == N) break;

        cout << ", ";

        cur = (cur + M - 2) % (N - i) + 1;
    }

    cout << ">\n";
}
