#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    vector<int> u(N+1);

    for(int i=0; i<M; i++) {
        for(int j=1; j<=N; j++) {
            int x; cin >> x;

            if(x == v[i]) u[j]++;
            else u[v[i]]++;
        }
    }

    for(int i=1; i<=N; i++) cout << u[i] << "\n";
}
