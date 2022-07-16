#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<char>> v(N, vector<char>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vector<vector<char>> u(N, vector<char>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> u[i][j];

    bool check = true;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(v[i][j] == '*' && u[i][j] == 'x') check = false;

    int di[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dj[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!check && v[i][j] == '*') {
                cout << "*";
                continue;
            }

            if(u[i][j] == '.') {
                cout << ".";
                continue;
            }

            int cnt = 0;
            for(int k=0; k<8; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];

                if(ni < 0 || ni >= N || nj < 0 || nj >= N) continue;

                if(v[ni][nj] == '*') cnt++;
            }

            cout << cnt;
        }
        cout << "\n";
    }
}
