#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(N, vector<int>(N));

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++) cin >> v[i][j];

    while(true) {
        vector<vector<int>> u(N/2, vector<int>(N/2));

        for(int i=0; i<N; i+=2)
            for(int j=0; j<N; j+=2) {
                vector<int> w;

                w.push_back(v[i][j]);
                w.push_back(v[i+1][j]);
                w.push_back(v[i][j+1]);
                w.push_back(v[i+1][j+1]);

                sort(w.begin(), w.end(), greater<int>());

                u[i/2][j/2] = w[1];
            }

        v = u;
        N /= 2;

        if(N == 1) break;
    }

    cout << v[0][0] << "\n";
}
