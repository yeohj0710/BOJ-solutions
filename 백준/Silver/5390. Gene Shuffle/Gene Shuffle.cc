#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N), u(N);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<N; i++) cin >> u[i];

        int cur = 0;

        while(cur < N) {
            set<int> sv, su;

            for(int i=cur; i<N; i++) {
                sv.insert(v[i]);
                su.insert(u[i]);

                if(sv == su) {
                    cout << cur+1 << "-" << i+1 << " ";

                    cur = i+1;

                    break;
                }
            }
        }

        cout << "\n";
    }
}
