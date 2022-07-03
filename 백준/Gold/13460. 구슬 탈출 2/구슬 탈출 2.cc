#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, ans = INT_MAX;
vector<vector<char>> v;
pair<int, int> r, b;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void rot(int rx, int ry, int bx, int by, int cnt, int dir) {
    if(cnt > 10 || cnt >= ans) return;

    bool rch = false, bch = false;


    int rnx = rx + dx[dir];
    int rny = ry + dy[dir];

    while(true) {
        if(v[rnx][rny] == '#') break;

        if(v[rnx][rny] == 'O') {
            rch = true;
            break;
        }

        rnx += dx[dir];
        rny += dy[dir];
    }

    rnx -= dx[dir];
    rny -= dy[dir];


    int bnx = bx + dx[dir];
    int bny = by + dy[dir];

    while(true) {
        if(v[bnx][bny] == '#') break;

        if(v[bnx][bny] == 'O') {
            bch = true;
            break;
        }

        bnx += dx[dir];
        bny += dy[dir];
    }

    bnx -= dx[dir];
    bny -= dy[dir];


    if(bch) return;
    else if(rch) {
        ans = min(ans, cnt);
        return;
    }

    if(rnx == bnx && rny == bny) {
        int rd = abs(rx - rnx) + abs(ry - rny);
        int bd = abs(bx - bnx) + abs(by - bny);

        if(rd > bd) rnx -= dx[dir], rny -= dy[dir];
        else bnx -= dx[dir], bny -= dy[dir];
    }

    for(int i=0; i<4; i++) {
        if(i == dir) continue;

        if(i == 0 && dir == 1) continue;
        if(i == 1 && dir == 0) continue;
        if(i == 2 && dir == 3) continue;
        if(i == 3 && dir == 2) continue;

        rot(rnx, rny, bnx, bny, cnt + 1, i);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N, vector<char>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            cin >> v[i][j];

            if(v[i][j] == 'R') {
                r.first = i;
                r.second = j;
                v[i][j] = '.';
            }
            else if(v[i][j] == 'B') {
                b.first = i;
                b.second = j;
                v[i][j] = '.';
            }
        }

    for(int i=0; i<4; i++) {
        int rx = r.first, ry = r.second;
        int bx = b.first, by = b.second;

        rot(rx, ry, bx, by, 1, i);
    }

    if(ans <= 10) cout << ans << "\n";
    else cout << -1 << "\n";
}
