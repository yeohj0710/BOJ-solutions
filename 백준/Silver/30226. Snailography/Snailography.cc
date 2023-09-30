#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    vector<vector<char>> v(N, vector<char>(N, '#'));

    int x = N / 2, y = N / 2;

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    int cur = 0, cnt = 0, lim = 2;

    for(int i=0; i<str.length(); i++) {
        v[x][y] = str[i];

        x += dx[cur % 4], y += dy[cur % 4];
        cnt++;

        if(cnt == lim / 2) lim++, cnt = 0, cur++;
    }

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(v[i][j] != '#') cout << v[i][j];
    cout << "\n";
}
