#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int cnt = 0;

        vector<int> v(N);
        for(int i=0; i<N; i++) {
            cin >> v[i];

            if(v[i] == 2) cnt++;
        }

        if(cnt % 2 == 1) {
            cout << -1 << "\n";
            continue;
        }

        int x = 0;

        for(int i=0; i<N; i++) {
            if(v[i] == 2) x++;

            if(x == cnt / 2) {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}
