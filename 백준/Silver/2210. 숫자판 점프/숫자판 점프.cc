#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<vector<int>> v(5, vector<int>(5));
vector<string> ans;

void f(int x, int y, string temp) {
    if(temp.length() == 6) {
        ans.push_back(temp);
        return;
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx < 0 || ny < 0 || nx >= 5 || ny >= 5) continue;

        f(nx, ny, temp + char(v[nx][ny] + '0'));
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) cin >> v[i][j];

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++) f(i, j, "");

    sort(ans.begin(), ans.end());

    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    cout << ans.size() << "\n";
}
