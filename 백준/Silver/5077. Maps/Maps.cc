#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N1, M1; cin >> N1 >> M1;

        vector<vector<char>> v(N1, vector<char>(M1));
        for(int i=0; i<N1; i++)
            for(int j=0; j<M1; j++) cin >> v[i][j];

        int N2, M2; cin >> N2 >> M2;

        vector<vector<char>> u(N2, vector<char>(M2));
        for(int i=0; i<N2; i++)
            for(int j=0; j<M2; j++) cin >> u[i][j];

        int ans = 0;

        for(int i=0; i<N2-N1+1; i++)
            for(int j=0; j<M2-M1+1; j++) {
                bool check = true;

                for(int k=0; k<N1; k++)
                    for(int l=0; l<M1; l++)
                        if(u[i+k][j+l] != v[k][l]) check = false;

                if(check) ans++;
            }

        cout << ans << "\n";
    }
}
