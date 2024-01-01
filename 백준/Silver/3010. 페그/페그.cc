#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(7);

    for(int i=0; i<7; i++) getline(cin, v[i]);

    int ans = 0;

    for(int i=0; i<7; i++)
        for(int j=0; j<v[i].length(); j++) {
            if(v[i][j] != 'o') continue;

            int dx[4] = {1, -1, 0, 0};
            int dy[4] = {0, 0, 1, -1};

            for(int k=0; k<4; k++) {
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(nx < 0 || ny < 0 || nx >= 7 || ny >= v[i].length()) continue;
                if(v[nx][ny] != 'o') continue;

                nx = i + dx[k] * 2;
                ny = j + dy[k] * 2;

                if(nx < 0 || ny < 0 || nx >= 7 || ny >= v[i].length()) continue;
                if(v[nx][ny] == '.') ans++;
            }
        }

    cout << ans << "\n";
}
