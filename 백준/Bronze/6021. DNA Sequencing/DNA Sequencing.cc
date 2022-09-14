#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<string> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            int cnt = 0;

            for(int k=0; k<N; k++) {
                if(k == i) continue;

                bool check = true;

                for(int l=0; l<25; l++)
                    if(v[k][l] != v[i][l] && v[k][l] != u[j][l]) check = false;

                if(check) cnt++;
            }

            for(int k=0; k<M; k++) {
                if(k == j) continue;

                bool check = true;

                for(int l=0; l<25; l++)
                    if(u[k][l] != v[i][l] && u[k][l] != u[j][l]) check = false;

                if(check) cnt++;
            }

            cout << cnt << " ";
        }
        cout << "\n";
    }
}
