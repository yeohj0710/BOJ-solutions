#include <bits/stdc++.h>
#define int long long
using namespace std;

int N;
vector<vector<char>> v;
vector<string> u, w;

void f(int x, int y, string s) {
    if(x == 0 && y == 0) {
        u.push_back(s);

        return;
    }

    int dx[2] = {-1, 0};
    int dy[2] = {0, -1};

    for(int i=0; i<2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0) continue;

        f(nx, ny, s + v[nx][ny]);
    }
}

void g(int x, int y, string s) {
    if(x == N-1 && y == N-1) {
        w.push_back(s);

        return;
    }

    int dx[2] = {1, 0};
    int dy[2] = {0, 1};

    for(int i=0; i<2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= N || ny >= N) continue;

        g(nx, ny, s + v[nx][ny]);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<char>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vector<string> vv;

    for(int i=0; i<N; i++) {
        u.clear();
        w.clear();

        f(i, N-1-i, "");
        g(i, N-1-i, "");

        sort(u.begin(), u.end());
        sort(w.begin(), w.end());

        for(int j=0; j<u.size(); j++) {
            if(upper_bound(w.begin(), w.end(), u[j]) - lower_bound(w.begin(), w.end(), u[j]) > 0) {
                string s = u[j];

                reverse(s.begin(), s.end());

                vv.push_back(s + v[i][N-1-i] + u[j]);
            }
        }
    }

    sort(vv.begin(), vv.end());
    vv.erase(unique(vv.begin(), vv.end()), vv.end());

    cout << vv.size() << "\n";
}
