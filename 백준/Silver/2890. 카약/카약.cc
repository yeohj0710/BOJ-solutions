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

    vector<int> u(10);
    for(int i=M-1; i>=0; i--)
        for(int j=0; j<N; j++)
            if(v[j][i] >= '1' && v[j][i] <= '9' && u[v[j][i] - '0'] == 0) u[v[j][i] - '0'] = i;

    vector<int> w(10);
    int cnt = 1;

    for(int i=M-1; i>=0; i--) {
        bool check = false;

        for(int j=1; j<=9; j++)
            if(u[j] == i) {
                w[j] = cnt;
                check = true;
            }

        if(check) cnt++;
    }

    for(int i=1; i<=9; i++) cout << w[i] << "\n";
}
