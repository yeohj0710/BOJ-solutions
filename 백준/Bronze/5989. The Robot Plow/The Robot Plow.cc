#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<bool>> v(N+1, vector<bool>(M+1));

    while(K--) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

        for(int i=x1; i<=x2; i++)
            for(int j=y1; j<=y2; j++) v[i][j] = true;
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            if(v[i][j]) ans++;

    cout << ans << "\n";
}
