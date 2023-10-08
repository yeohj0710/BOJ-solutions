#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<string>> v(K, vector<string>(N));

    for(int i=0; i<K; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    vector<string> u(N);

    for(int i=0; i<N; i++) cin >> u[i];

    int cnt = 0;

    for(int i=0; i<K; i++) {
        bool chk = true;

        for(int j=0; j<N; j++)
            for(int k=0; k<M; k++)
                if(u[j][k] == 'x' && v[i][j][k] == '.') chk = false;

        if(chk) cnt++;
    }

    if(cnt == 1) cout << "yes\n";
    else cout << "no\n";
}
