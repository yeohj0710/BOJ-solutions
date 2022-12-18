#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string str; cin >> str;

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    bool ans = false;

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++)
            for(int k=0; k<8; k++) {
                bool check = true;

                for(int l=0; l<str.length(); l++) {
                    int nx = i + dx[k] * l;
                    int ny = j + dy[k] * l;

                    if(nx < 0 || ny < 0 || nx >= N || ny >= M) {
                        check = false;
                        break;
                    }

                    if(v[nx][ny] != str[l]) {
                        check = false;
                        break;
                    }
                }

                if(check) ans = true;
            }

    if(ans) cout << 1 << "\n";
    else cout << 0 << "\n";
}
