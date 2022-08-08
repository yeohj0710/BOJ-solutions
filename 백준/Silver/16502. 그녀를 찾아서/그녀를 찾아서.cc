#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<double> v(4, 0.25);

    vector<vector<double>> u(4, vector<double>(4));

    while(M--) {
        char a, b; cin >> a >> b;
        double x; cin >> x;

        u[a - 'A'][b - 'A'] += x;
    }

    while(N--) {
        vector<double> w(4);

        for(int i=0; i<4; i++)
            for(int j=0; j<4; j++) w[j] += v[i] * u[i][j];

        v = w;
    }

    cout << fixed;
    cout.precision(2);

    for(int i=0; i<4; i++) cout << v[i] * 100 << "\n";
}
