#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    string str[2]; cin >> str[0] >> str[1];

    str[0] = '0' + str[0];
    str[1] = '0' + str[1];

    vector<vector<int>> dis(2, vector<int>(N+1, -1));
    dis[0][1] = 0;

    queue<pair<int, int>> q;
    q.push({0, 1});

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if(y + M > N) {
            cout << 1 << "\n";
            return 0;
        }

        if(str[x][y-1] == '1' && dis[x][y-1] == -1 && dis[x][y] < y-2) {
            dis[x][y-1] = dis[x][y] + 1;
            q.push({x, y-1});
        }
        if(str[x][y+1] == '1' && dis[x][y+1] == -1) {
            dis[x][y+1] = dis[x][y] + 1;
            q.push({x, y+1});
        }
        if(str[!x][y+M] == '1' && dis[!x][y+M] == -1) {
            dis[!x][y+M] = dis[x][y] + 1;
            q.push({!x, y+M});
        }
    }

    cout << 0 << "\n";
}
