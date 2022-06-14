#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) cin >> u[i];

    for(int i=0; i<3; i++) {
        vector<int> w(N+1);

        for(int j=1; j<=N; j++) w[j] = u[v[j]];

        u = w;
    }

    for(int i=1; i<=N; i++) cout << u[i] << "\n";
}
