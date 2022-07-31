#include <bits/stdc++.h>
#define int long long
using namespace std;

int co[101][101] = {};
int mod = (int)(1e9 + 7);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<=100; i++) co[i][0] = 1;
    for(int i=1; i<=100; i++)
        for(int j=1; j<=i; j++) co[i][j] = (co[i-1][j-1] + co[i-1][j]) % mod;

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, M; cin >> M >> N;

        int ans = 0;

        for(int i=0; i<M; i++) {
            int a;

            if(i % 2 == 0) a = 1;
            else a = -1;

            int b = 1;
            for(int j=0; j<N; j++) b = (b * (M - i)) % mod;

            ans = (ans + a * b * co[M][i] + mod*100) % mod;
        }

        cout << "Case #" << t << ": " << ans << "\n";
    }
}
