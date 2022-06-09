#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    int i = 0, j = 0, dir = 0, cur = 1, ans = 0;

    while(true) {
        v[i][j] = cur;
        if(cur == N*M) break;

        if(dir == 0 && (j+1 >= M || v[i][j+1] != 0)) dir = 1, ans++;
        else if(dir == 1 && (i+1 >= N || v[i+1][j] != 0)) dir = 2, ans++;
        else if(dir == 2 && (j-1 < 0 || v[i][j-1] != 0)) dir = 3, ans++;
        else if(dir == 3 && (i-1 < 0 || v[i-1][j] != 0)) dir = 0, ans++;

        if(dir == 0) j++;
        else if(dir == 1) i++;
        else if(dir == 2) j--;
        else if(dir == 3) i--;

        cur++;
    }

    cout << ans << "\n";
}
