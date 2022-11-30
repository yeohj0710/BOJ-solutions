#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(N+1, vector<int>(N+1));

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) cin >> v[i][j];

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            int cnt = 0;

            for(int k=max(i-M, (int)0); k<=min(i+M, N); k++)
                for(int l=max(j-M, (int)0); l<=min(j+M, N); l++) cnt += v[k][l];

            cout << cnt << " ";
        }
        cout << "\n";
    }
}
