#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<P> v(N);
    for(int i=0; i<N; i++) {
        int x, y; cin >> x >> y;
        v[i] = {x, y};
    }

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;
        a--;

        int ans = 0;
        for(int i=0; i<N; i++) {
            if(i == a) continue;

            if(pow(v[a].x - v[i].x, 2) + pow(v[a].y - v[i].y, 2) <= b*b) ans++;
        }

        cout << ans << "\n";
    }
}
