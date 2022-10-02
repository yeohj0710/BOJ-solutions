#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    vector<int> u(M);
    int ans = 0;

    for(int i=N-1; i>=0; i--) {
        int x = 0;

        for(int j=M-1; j>=0; j--) {
            if(v[i][j] == 'J') ans += x * u[j];
            else if(v[i][j] == 'O') x++;
            else if(v[i][j] == 'I') u[j]++;
        }
    }

    cout << ans << "\n";
}
