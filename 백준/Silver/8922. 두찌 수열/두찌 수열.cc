#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<vector<int>> u;

        while(true) {
            bool chk = true;

            for(int i=0; i<N; i++)
                if(v[i] != 0) chk = false;

            if(chk) {
                cout << "ZERO\n";
                break;
            }

            for(int i=0; i<u.size(); i++)
                if(v == u[i]) chk = true;

            if(chk) {
                cout <<"LOOP\n";
                break;
            }

            u.push_back(v);

            vector<int> w(N);

            for(int i=0; i<N; i++)
                w[i] = abs(v[i] - v[(i + 1) % N]);

            v = w;
        }
    }
}
