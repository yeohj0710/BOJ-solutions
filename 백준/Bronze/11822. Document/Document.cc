#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(5));

    for(int i=0; i<N; i++)
        for(int j=0; j<5; j++) cin >> v[i][j];

    int idx = 0, cur = 0;

    while(true) {
        if(v[idx][cur % 5] == 1) {
            idx++;

            if(idx == N) break;
        }

        cur++;
    }

    int ans = (cur / 5) * 7 + (cur % 5) + 1;

    cout << ans << "\n";
}
