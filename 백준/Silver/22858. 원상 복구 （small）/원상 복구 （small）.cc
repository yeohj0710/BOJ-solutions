#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) cin >> u[i];

    while(M--) {
        vector<int> w(N+1);

        for(int i=1; i<=N; i++) w[u[i]] = v[i];

        v = w;
    }

    for(int i=1; i<=N; i++) cout << v[i] << " ";
    cout << "\n";
}
