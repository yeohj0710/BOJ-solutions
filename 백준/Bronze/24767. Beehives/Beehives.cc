#include <bits/stdc++.h>
#define int long long
using namespace std;

struct P { double x, y; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double d, N; cin >> d >> N;
        if(d == 0 && N == 0) break;

        vector<P> v(N);
        for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;

        int cnt = 0;
        for(int i=0; i<N; i++) {
            bool check = true;
            for(int j=0; j<N; j++) {
                if(i == j) continue;
                if(pow(v[i].x - v[j].x, 2) + pow(v[i].y - v[j].y, 2) <= d*d) check = false;
            }
            if(check) cnt++;
        }

        cout << N-cnt << " sour, " << cnt << " sweet\n";
    }
}
