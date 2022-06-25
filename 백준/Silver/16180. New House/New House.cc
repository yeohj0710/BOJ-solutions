#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<vector<char>> v(N, vector<char>(N));

        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) cin >> v[i][j];

        int ans = 0;
        for(int i=1; i<=N; i++) {
            for(int j=0; j<N-i+1; j++)
                for(int k=0; k<N-i+1; k++) {
                    bool check = true;
                    for(int l=j; l<j+i; l++)
                        for(int m=k; m<k+i; m++)
                            if(v[l][m] == '#') check = false;
                    if(check) ans = max(ans, i);
                }
        }

        cout << ans << "\n";
    }
}
