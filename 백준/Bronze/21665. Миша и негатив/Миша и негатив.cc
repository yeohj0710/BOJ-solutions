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

    int cnt = 0;
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            char c; cin >> c;
            if(c != v[i][j]) cnt++;
        }

    cout << N*M - cnt << "\n";
}
