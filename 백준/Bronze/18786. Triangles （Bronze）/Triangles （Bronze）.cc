#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { int x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<P> v(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

    int ans = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<N; k++) {
                if(i == j || j == k || k == i) continue;

                if(v[i].x == v[j].x && v[i].y == v[k].y)
                    ans = max(ans, abs(v[i].x * (v[j].y - v[k].y) + v[j].x * (v[k].y - v[i].y) + v[k].x * (v[i].y - v[j].y)));
            }

    cout << ans << "\n";
}
