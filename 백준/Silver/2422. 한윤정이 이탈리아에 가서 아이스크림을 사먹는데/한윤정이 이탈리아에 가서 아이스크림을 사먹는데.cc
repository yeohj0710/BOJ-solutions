#include <bits/stdc++.h>
using namespace std;

const int MAX = 201;

bool check[MAX][MAX] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    while(M--) {
        int a, b; cin >> a >> b;

        check[a][b] = true;
        check[b][a] = true;
    }

    int ans = 0;
    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++)
            for(int k=j+1; k<=N; k++) {
                if(check[i][j] || check[j][k] || check[k][i]) continue;
                else ans++;
            }

    cout << ans << "\n";
}
