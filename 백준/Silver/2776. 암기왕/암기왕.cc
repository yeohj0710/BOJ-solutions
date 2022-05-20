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

        sort(v.begin(), v.end());

        int M; cin >> M;

        for(int i=0; i<M; i++) {
            int x; cin >> x;

            if(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x) > 0) cout << "1\n";
            else cout << "0\n";
        }
    }
}
