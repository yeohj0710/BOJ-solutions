#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<M-1; j++) {
            if(v[i][j] == 'S' && v[i][j+1] == 'W') check = false;
            if(v[i][j] == 'W' && v[i][j+1] == 'S') check = false;
        }
    for(int i=0; i<M; i++)
        for(int j=0; j<N-1; j++) {
            if(v[j][i] == 'S' && v[j+1][i] == 'W') check = false;
            if(v[j][i] == 'W' && v[j+1][i] == 'S') check = false;
        }

    if(!check) {
        cout << 0 << "\n";
        return 0;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            if(v[i][j] != 'S') continue;

            int di[4] = {1, -1, 0, 0};
            int dj[4] = {0, 0, 1, -1};

            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni < 0 || nj < 0 || ni >= N || nj >= M) continue;
                if(v[ni][nj] != '.') continue;

                v[ni][nj] = 'D';
            }
        }

    cout << 1 << "\n";

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cout << v[i][j];
        cout << "\n";
    }
}
