#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<vector<char>> v(3, vector<char>(3));

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) cin >> v[i][j];

    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    string ans = "ZZZ";

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            for(int k=0; k<8; k++)
                for(int l=0; l<8; l++) {
                    int ii = i + dx[k], jj = j + dy[k];

                    if(ii < 0 || jj < 0 || ii >= 3 || jj >= 3) continue;

                    ii = i + dx[k] + dx[l];
                    jj = j + dy[k] + dy[l];

                    if(ii < 0 || jj < 0 || ii >= 3 || jj >= 3) continue;
                    if(i == ii && j == jj) continue;

                    string s = "";

                    s += v[i][j];
                    s += v[i + dx[k]][j + dy[k]];
                    s += v[i + dx[k] + dx[l]][j + dy[k] + dy[l]];

                    ans = min(ans, s);
                }

    cout << ans << "\n";
}
