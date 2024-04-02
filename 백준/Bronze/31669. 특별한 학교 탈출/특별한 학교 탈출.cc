#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<string> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<M; i++) {
        bool chk = true;

        for(int j=0; j<N; j++)
            if(v[j][i] == 'O') chk = false;

        if(chk) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << "ESCAPE FAILED\n";
}
