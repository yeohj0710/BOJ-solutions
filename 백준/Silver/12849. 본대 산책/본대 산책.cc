#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(8);
    v[0] = 1;

    int N; cin >> N;

    while(N--) {
        vector<int> u(8);

        u[0] = v[1] + v[2];
        u[1] = v[0] + v[2] + v[3];
        u[2] = v[0] + v[1] + v[3] + v[4];
        u[3] = v[1] + v[2] + v[4] + v[5];
        u[4] = v[2] + v[3] + v[5] + v[6];
        u[5] = v[3] + v[4] + v[7];
        u[6] = v[4] + v[7];
        u[7] = v[5] + v[6];

        for(int i=0; i<8; i++) u[i] %= (int)(1e9 + 7);

        v = u;
    }

    cout << v[0] << "\n";
}
