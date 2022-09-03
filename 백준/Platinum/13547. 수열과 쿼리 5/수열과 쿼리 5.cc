#include <bits/stdc++.h>
#define int long long
using namespace std;

int S;
struct query { int l, r, n; };

bool cmp(query a, query b) {
    if(a.l / S != b.l / S) return a.l / S < b.l / S;
    else return a.r < b.r;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    S = sqrt(N);

    int M; cin >> M;

    vector<query> Q(M);

    for(int i=0; i<M; i++) {
        int a, b; cin >> a >> b;

        Q[i].l = a - 1, Q[i].r = b - 1, Q[i].n = i;
    }

    sort(Q.begin(), Q.end(), cmp);

    vector<int> ans(M), cnt(1e6 + 1);
    int val = 0, l = Q[0].l, r = Q[0].r;

    for(int i=l; i<=r; i++) {
        if(cnt[v[i]] == 0) val++;
        cnt[v[i]]++;
    }

    ans[Q[0].n] = val;

    for(int i=1; i<M; i++) {
        while(Q[i].l < l)
            if(cnt[v[--l]]++ == 0) val++;

        while(Q[i].r > r)
            if(cnt[v[++r]]++ == 0) val++;

        while(Q[i].l > l)
            if(--cnt[v[l++]] == 0) val--;

        while(Q[i].r < r)
            if(--cnt[v[r--]] == 0) val--;

        ans[Q[i].n] = val;
    }

    for(int i=0; i<M; i++) cout << ans[i] << "\n";
}
