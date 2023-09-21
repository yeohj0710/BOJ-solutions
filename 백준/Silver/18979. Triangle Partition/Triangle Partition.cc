#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        N *= 3;

        struct s { int x, y, n; };
        vector<s> v(N);

        for(int i=0; i<N; i++) {
            cin >> v[i].x >> v[i].y;

            v[i].n = i+1;
        }

        sort(v.begin(), v.end(), [](s a, s b) {
            if(a.x != b.x) return a.x < b.x;
            else return a.y < b.y;
        });

        for(int i=0; i<N; i+=3)
            cout << v[i].n << " " << v[i+1].n << " " << v[i+2].n << "\n";
    }
}
