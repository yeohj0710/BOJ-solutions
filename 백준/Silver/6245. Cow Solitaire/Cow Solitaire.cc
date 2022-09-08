#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<string>> v;
int N, ans = 0;

void f(int x, int y, int sum) {
    if(x == 0 && y == N-1) {
        ans = max(ans, sum);
        return;
    }

    int dx[2] = {-1, 0};
    int dy[2] = {0, 1};

    for(int i=0; i<2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;

        int add;
        char ch = v[nx][ny][0];

        if(ch >= '2' && ch <= '9') add = ch - '0';
        else if(ch == 'A') add = 1;
        else if(ch == 'T') add = 10;
        else if(ch == 'J') add = 11;
        else if(ch == 'Q') add = 12;
        else if(ch == 'K') add = 13;

        f(nx, ny, sum + add);
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N, vector<string>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    int add;
    char ch = v[N-1][0][0];

    if(ch >= '2' && ch <= '9') add = ch - '0';
    else if(ch == 'A') add = 1;
    else if(ch == 'T') add = 10;
    else if(ch == 'J') add = 11;
    else if(ch == 'Q') add = 12;
    else if(ch == 'K') add = 13;

    f(N-1, 0, add);

    cout << ans << "\n";
}
