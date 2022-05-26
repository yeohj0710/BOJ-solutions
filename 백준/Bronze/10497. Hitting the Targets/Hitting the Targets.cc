#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<double>> v(N);

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        if(str == "rectangle") {
            for(int j=0; j<4; j++) {
                double x; cin >> x;
                v[i].push_back(x);
            }
        }
        else {
            for(int j=0; j<3; j++) {
                double x; cin >> x;
                v[i].push_back(x);
            }
        }
    }

    int Q; cin >> Q;

    while(Q--) {
        double x, y; cin >> x >> y;

        int ans = 0;

        for(int i=0; i<N; i++) {
            if(v[i].size() == 4) {
                if(x >= v[i][0] && x <= v[i][2] && y >= v[i][1] && y <= v[i][3]) ans++;
            }
            else {
                if(pow(v[i][0] - x, 2) + pow(v[i][1] - y, 2) <= pow(v[i][2], 2)) ans++;
            }
        }

        cout << ans << "\n";
    }
}
