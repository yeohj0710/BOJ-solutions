#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string str; double x, y, r; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<s> v(N);

        for(int i=0; i<N; i++)
            cin >> v[i].str >> v[i].x >> v[i].y >> v[i].r;

        vector<int> u(N);

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(i == j) continue;

                if(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2) <= pow(v[i].r + v[j].r, 2)) u[i]++;
            }

        int Max = 0;

        for(int i=0; i<N; i++) Max = max(Max, u[i]);

        int cnt = 0, idx;

        for(int i=0; i<N; i++)
            if(u[i] == Max) {
                cnt++;
                idx = i;
            }

        if(cnt >= 2) {
            cout << "TIE\n";
            continue;
        }

        cout << v[idx].str << "\n";
    }
}
