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

    while(M--) {
        int a, b; cin >> a >> b;

        if(f(a) != f(b)) v[f(a)] = f(b);
    }

    vector<int> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    int ans = 0;
    for(int i=1; i<N; i++)
        if(f(u[i-1]) != f(u[i])) ans++;

    cout << ans << "\n";
}
