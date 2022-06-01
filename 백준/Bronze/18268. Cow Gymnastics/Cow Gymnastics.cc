#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    int ans = 0;
    for(int i=1; i<=M; i++)
        for(int j=i+1; j<=M; j++) {
            int a, b;

            for(int k=0; k<M; k++) {
                if(v[0][k] == i) a = k;
                if(v[0][k] == j) b = k;
            }

            bool check = true;

            for(int k=1; k<N; k++) {
                int c, d;
                for(int l=0; l<M; l++) {
                    if(v[k][l] == i) c = l;
                    if(v[k][l] == j) d = l;
                }

                if((a < b) != (c < d)) check = false;
            }

            if(check) ans++;
        }

    cout << ans << "\n";
}
