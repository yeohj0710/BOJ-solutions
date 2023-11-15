#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    int M; cin >> M;

    while(M--) {
        int a, b; cin >> a >> b;

        int cur = a;

        for(int i=1; i<=N; i++) {
            if(a <= v[i] && v[i] <= b) cout << cur++ << " ";
            else cout << v[i] << " ";
        }
        cout << "\n";
    }
}
