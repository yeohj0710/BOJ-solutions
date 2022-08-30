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

        int ans = 0;

        for(int i=0; i<N; i++)
            for(int j=0; j<M-2; j++)
                if(v[i][j] == '>' && v[i][j+1] == 'o' && v[i][j+2] == '<') ans++;

        for(int i=0; i<N-2; i++)
            for(int j=0; j<M; j++)
                if(v[i][j] == 'v' && v[i+1][j] == 'o' && v[i+2][j] == '^') ans++;

        cout << ans << "\n";
    }
}
