#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int X, Y; cin >> X >> Y;
        if(X == 0 && Y == 0) break;

        int N; cin >> N;

        vector<s> v(N);
        for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

        int M; cin >> M;

        int ans = 0;

        while(M--) {
            int x, y; cin >> x >> y;
            for(int i=0; i<N; i++)
                if(x == v[i].x && y == v[i].y) ans++;
        }

        cout << ans << "\n";
    }
}
