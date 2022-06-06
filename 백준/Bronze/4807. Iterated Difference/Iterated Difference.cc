#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        cout << "Case " << t << ": ";

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        bool flag = false;
        for(int i=0; i<=1000; i++) {
            bool check = true;
            for(int j=0; j<N; j++)
                if(v[j] != v[0]) check = false;

            if(check) {
                cout << i << " iterations\n";
                flag = true;
                break;
            }

            vector<int> u(N);
            for(int i=0; i<N; i++) u[i] = abs(v[i] - v[(i+1)%N]);

            v = u;
        }

        if(!flag) cout << "not attained\n";
    }
}
