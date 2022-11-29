#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<int> u(N+1);
        for(int i=1; i<=N; i++) cin >> u[i];

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) v[u[i]] = i;

        if(v == u) cout << "ambiguous\n";
        else cout << "not ambiguous\n";
    }
}
