#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++) cin >> v[i][j];

        for(int i=N-1; i>=0; i--) {
            for(int j=0; j<M; j++) cout << v[i][j];
            cout << "\n";
        }
    }
}
