#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        for(int i=1; ; i++) {
            vector<int> u(N);
            for(int j=0; j<N; j++) u[j] = v[j] % i;

            sort(u.begin(), u.end());

            bool check = true;
            for(int i=0; i<u.size()-1; i++)
                if(u[i] == u[i+1]) check = false;

            if(check) {
                cout << i << "\n";
                break;
            }
        }
    }
}
