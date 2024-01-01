#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<vector<char>> v(N, vector<char>(N));

        int sx, sy;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                cin >> v[i][j];

                if(v[i][j] == 's') sx = i, sy = j;
            }

        double ans = DBL_MAX;
        int px, py;

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                if(v[i][j] != 'p') continue;

                double dis = sqrt(pow((double)sx - i, 2) + pow((double)sy - j, 2));

                if(dis < ans) {
                    ans = dis;
                    px = i, py = j;
                }
            }

        cout << fixed << setprecision(2);
        cout << "(" << sx << "," << sy << "):(" << px << "," << py << "):" << ans << "\n";
    }
}
