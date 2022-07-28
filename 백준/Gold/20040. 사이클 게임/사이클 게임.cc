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

    vector<pair<int, int>> u(M);
    for(int i=0; i<M; i++) cin >> u[i].first >> u[i].second;

    v.resize(N);
    for(int i=0; i<N; i++) v[i] = i;

    for(int i=0; i<M; i++) {
        int a = u[i].first, b = u[i].second;

        if(f(a) == f(b)) {
            cout << i+1 << "\n";
            return 0;
        }

        v[f(a)] = f(b);
    }

    cout << 0 << "\n";
}
