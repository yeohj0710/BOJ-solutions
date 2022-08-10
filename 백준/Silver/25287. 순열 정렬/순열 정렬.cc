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

        if(N - v[0] + 1 < v[0]) v[0] = N - v[0] + 1;

        bool check = true;

        for(int i=1; i<N; i++) {
            if(v[i] < v[i-1] && N - v[i] + 1 < v[i-1]) {
                check = false;
                break;
            }

            if(N - v[i] + 1 < v[i] && N - v[i] + 1 >= v[i-1]) v[i] = N - v[i] + 1;
            else if(v[i] < v[i-1]) v[i] = N - v[i] + 1;
        }

        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
