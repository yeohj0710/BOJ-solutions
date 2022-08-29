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

    int ans = 0;

    vector<int> u(M);
    for(int i=0; i<M; i++) cin >> u[i];

    for(int i=0; i<M; i++) {
        int x= u[i];

        if(f(x) == 0) break;

        v[f(x)] = f(x) - 1;
        ans++;
    }

    cout << ans << "\n";
}
