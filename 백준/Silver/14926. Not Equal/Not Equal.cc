#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<bool>> v(N+1, vector<bool>(N+1));
    v[1][N] = v[N][1] = true;

    int cur = 0;

    for(int i=0; i<N*(N-1)/2; i++) {
        for(int j=1; j<=N; j++) {
            if(j == cur || v[cur][j]) continue;

            v[cur][j] = v[j][cur] = true;
            cur = j;
            break;
        }

        cout << "a" << cur << " ";
    }

    cout << "a" << 1 << "\n";
}
