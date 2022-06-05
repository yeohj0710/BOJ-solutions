#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N), u(N);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<N; i++) cin >> u[i];

        sort(v.begin(), v.end());
        sort(u.begin(), u.end(), greater<int>());

        int a = 0, b = 0;
        for(int i=0; i<M; i++) a += v[i];
        for(int i=0; i<M; i++) b += u[i];

        if(a > b) cout << "YES\n";
        else cout << "NO\n";
    }
}
