#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N);
        for(int i=0; i<M; i++) v[i] = 1;

        cout << "The bit patterns are\n";

        while(true) {
            for(int i=0; i<N; i++) cout << v[i];

            cout << "\n";

            if(!prev_permutation(v.begin(), v.end())) break;
        }

        cout << "\n";
    }
}
