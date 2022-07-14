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

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            int x; cin >> x;

            if(x == 1 && f(i) != f(j)) v[f(i)] = f(j);
        }

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    bool check = true;
    for(int i=1; i<M; i++)
        if(f(u[i]) != f(u[i-1])) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
