#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int R, C; cin >> R >> C;

        vector<vector<int>> v(R+1, vector<int>(C+1));

        for(int i=1; i<=R; i++)
            for(int j=1; j<=C; j++) cin >> v[i][j];

        for(int i=1; i<=R; i++) {
            for(int j=1; j<=C; j++) {
                vector<int> sub = {0, v[i][j-1], v[i-1][j], (v[i][j-1] + v[i-1][j]) / 2, v[i][j-1] + v[i-1][j] - v[i-1][j-1]};

                int mn = INT_MAX, idx = 0;

                for(int k=0; k<=4; k++) {
                    int val = v[i][j] - sub[k];

                    if(abs(val) < abs(mn)) {
                        mn = val;
                        idx = k;
                    }
                }

                cout << idx << " " << mn << " ";
            }
            cout << "\n";
        }
    }
}
