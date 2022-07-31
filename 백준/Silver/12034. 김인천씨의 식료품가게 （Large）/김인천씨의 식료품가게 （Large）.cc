#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N*2);
        for(int i=0; i<N*2; i++) cin >> v[i];

        vector<int> u(N*2);

        for(int i=0; i<N*2; i++) {
            if(v[i] % 3 == 0 && u[i] == 0) {
                for(int j=i+1; j<N*2; j++) {
                    if(v[j] == v[i] / 3 * 4 && u[j] == 0) {
                        u[i] = 1;
                        u[j] = 2;

                        break;
                    }
                }
            }
        }

        cout << "Case #" << t << ": ";

        for(int i=0; i<N*2; i++)
            if(u[i] == 1) cout << v[i] << " ";

        cout << "\n";
    }
}
