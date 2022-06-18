#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<string> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    string ans = "";
    for(int i=0; i<N; i++) ans += '?';

    for(int i=0; i<M; i++)
        for(int j=0; j<N; j++)
            for(int k=0; k<K; k++)
                if(v[i][j*K + k] != '?') ans[j] = v[i][j*K + k];

    cout << ans << "\n";
}
