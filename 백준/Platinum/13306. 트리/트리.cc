#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int Q, a, b; };

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> p(N+1);
    for(int i=2; i<=N; i++) cin >> p[i];

    M += N-1;

    vector<s> q(M);

    for(int i=0; i<M; i++) {
        cin >> q[i].Q;

        if(q[i].Q == 0) cin >> q[i].a;
        else if(q[i].Q == 1) cin >> q[i].a >> q[i].b;
    }

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    stack<bool> ans;

    for(int i=M-1; i>=0; i--) {
        if(q[i].Q == 0) {
            if(f(q[i].a) != f(p[q[i].a])) v[f(q[i].a)] = f(p[q[i].a]);
        }
        else if(q[i].Q == 1) {
            if(f(q[i].a) == f(q[i].b)) ans.push(true);
            else ans.push(false);
        }
    }

    while(!ans.empty()) {
        if(ans.top()) cout << "YES\n";
        else cout << "NO\n";

        ans.pop();
    }
}
