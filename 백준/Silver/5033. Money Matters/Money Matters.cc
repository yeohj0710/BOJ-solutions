#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) v[i] = i;

    vector<int> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) v[f(a)] = f(b);
    }

    vector<int> w(N);
    for(int i=0; i<N; i++) w[f(i)] += u[i];

    bool check = true;
    for(int i=0; i<N; i++)
        if(w[i] != 0) check = false;

    if(check) cout << "POSSIBLE\n";
    else cout << "IMPOSSIBLE\n";
}
