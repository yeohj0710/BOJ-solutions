#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        int cur = N * M;

        vector<vector<int>> v(N, vector<int>(M));

        int i = 0, j = 0;

        while(true) {
            int x = i, y = j;

            while(true) {
                if(x < 0 || y >= M) break;

                v[x][y] = cur;
                x--, y++, cur--;
            }

            if(i < N-1) i++;
            else j++;

            if(j == M) break;
        }

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
