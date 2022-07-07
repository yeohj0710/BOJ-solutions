#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N, M; cin >> N >> M;
        if(N == 0 && M == 0) break;

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) {
                if(v[i][j] != '#') continue;

                bool check = true;

                if(i > 0 && j > 0 && v[i-1][j-1] == '#') check = false;
                if(i > 0 && j < M-1 && v[i-1][j+1] == '#') check = false;
                if(i < N-1 && j > 0 && v[i+1][j-1] == '#') check = false;
                if(i < N-1 && j < M-1 && v[i+1][j+1] == '#') check = false;
                if(i > 0 && v[i-1][j] == '#') check = false;
                if(i < N-1 && v[i+1][j] == '#') check = false;
                if(j > 0 && v[i][j-1] == '#') check = false;
                if(j < M-1 && v[i][j+1] == '#') check = false;

                if(check) ans++;
            }

        cout << ans << "\n";
    }
}
