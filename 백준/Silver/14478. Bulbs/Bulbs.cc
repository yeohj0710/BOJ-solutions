#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;
        cin.ignore();

        vector<vector<char>> v(N, vector<char>(M));
        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) cin >> v[i][j];
            cin.ignore();
        }

        int ans = 0;
        for(int i=0; i<N; i++)
            for(int j=M-1; j>=0; j--) {
                if(v[i][j] == '0') {
                    ans++;
                    v[i][j] == '1';

                    for(int k=i+1; k<N; k++) {
                        if(v[k][j] == '1') v[k][j] = '0';
                        else v[k][j] = '1';
                    }

                    for(int k=j-1; k>=0; k--) {
                        if(v[i][k] == '1') v[i][k] = '0';
                        else v[i][k] = '1';
                    }
                }
            }

        cout << ans << "\n";
    }
}
