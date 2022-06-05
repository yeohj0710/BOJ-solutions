#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;
    cin.ignore();

    vector<vector<char>> v(N, vector<char>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) cin >> v[i][j];
        cin.ignore();
    }

    int ans = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M-K+1; j++) {
            if(v[i][j] == '.') {
                bool check = true;
                for(int k=0; k<K; k++)
                    if(v[i][j+k] != '.') check = false;
                if(check) ans++;
            }
        }
    }

    for(int i=0; i<M; i++) {
        for(int j=0; j<N-K+1; j++) {
            if(v[j][i] == '.') {
                bool check = true;
                for(int k=0; k<K; k++)
                    if(v[j+k][i] != '.') check = false;
                if(check) ans++;
            }
        }
    }

    cout << ans << "\n";
}
