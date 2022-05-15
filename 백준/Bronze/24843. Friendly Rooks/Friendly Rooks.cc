#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    if(K <= min(N, M)) {
        cout << "Possible\n";

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                if(i != j || i >= K) cout << ".";
                else cout << "*";
            }
            cout << "\n";
        }
    }
    else cout << "Impossible\n";
}
