#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<string> v(N), u(M);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cout << v[i] << " as " << u[j] << "\n";
}
