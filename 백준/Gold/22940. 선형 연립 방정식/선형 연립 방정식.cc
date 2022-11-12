#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int M = N + 1;

    vector<vector<double>> v(N, vector<double>(M));

    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin >> v[i][j];

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            double d = v[i][i], c = v[j][i] / v[i][i];

            for(int k=0; k<M; k++) {
                if(j == i) v[j][k] /= d;
                else v[j][k] -= c * v[i][k];
            }
        }
    }

    for(int i=0; i<N; i++) cout << v[i].back() << " ";
    cout << "\n";
}
