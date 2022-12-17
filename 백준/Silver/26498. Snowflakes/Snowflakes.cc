#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<vector<char>> v(N+1, vector<char>(N+1));

        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++) cin >> v[i][j];

        bool a = true, b = true;

        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++) {
                if(v[i][j] != v[i][N+1-j]) a = false;
                if(v[j][i] != v[N+1-j][i]) b = false;
            }

        if(a && b) cout << "Magnificent\n";
        else if(a && !b) cout << "Graceful\n";
        else if(!a && b) cout << "Beautiful\n";
        else cout << "Useless\n";
    }
}
