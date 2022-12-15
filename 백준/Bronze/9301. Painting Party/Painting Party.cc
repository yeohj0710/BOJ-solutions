#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case " << t << ":\n";

        int N, M; cin >> N >> M;

        vector<vector<char>> v(N+1, vector<char>(N+1, '.'));

        while(M--) {
            string str; cin >> str;
            int bx, by, ex, ey; cin >> by >> bx >> ey >> ex;
            char ch; cin >> ch;

            if(str == "Filled") {
                for(int i=bx; i<bx+ex; i++)
                    for(int j=by; j<by+ey; j++) v[i][j] = ch;
            }
            else if(str == "Empty") {
                for(int i=bx; i<bx+ex; i++)
                    for(int j=by; j<by+ey; j++)
                        if((i == bx || i == bx+ex-1) || (j == by || j == by+ey-1)) v[i][j] = ch;
            }
        }

        for(int i=N; i>=1; i--) {
            for(int j=1; j<=N; j++) cout << v[i][j];
            cout << "\n";
        }
    }
}
