#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        struct s { int x, y; };
        vector<s> v(N);

        for(int i=0; i<N; i++)
            cin >> v[i].x >> v[i].y;

        sort(v.begin(), v.end(), [](s a, s b) {
            if(a.x != b.x) return a.x < b.x;
            else return a.y < b.y;
        });

        int mn = LLONG_MAX, idx1, idx2;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                int val = pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2);

                if(val < mn) {
                    mn = val;
                    idx1 = i, idx2 = j;
                }
            }

        cout << v[idx1].x << " " << v[idx1].y << " ";
        cout << v[idx2].x << " " << v[idx2].y << "\n";
    }
}
