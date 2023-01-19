#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M, K; cin >> N >> M >> K;

    vector<vector<char>> v(N+1, vector<char>(M+1, '.'));

    for(int i=0; i<K; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        for(int j=a; j<=c; j++)
            for(int k=b; k<=d; k++)
                if(j == a || j == c || k == b || k == d) v[j][k] = char('a' + i);
    }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=M; j++) cout << v[i][j];
        cout << "\n";
    }
}
