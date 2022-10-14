#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int l, r, x; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<s> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].l >> v[i].r >> v[i].x;

    while(M--) {
        int x; cin >> x;

        int ans = 0;

        for(int i=0; i<N; i++) {
            if(x >= v[i].l && x <= v[i].r) {
                if((x - v[i].l) % 2 == 0) ans += v[i].x;
                else ans -= v[i].x;
            }
        }

        cout << ans << "\n";
    }
}
