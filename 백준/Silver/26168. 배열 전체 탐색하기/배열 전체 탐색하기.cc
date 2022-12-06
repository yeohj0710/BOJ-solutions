#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    while(M--) {
        int Q; cin >> Q;

        if(Q == 1) {
            int a; cin >> a;

            cout << N - (lower_bound(v.begin(), v.end(), a) - v.begin()) << "\n";
        }
        else if(Q == 2) {
            int a; cin >> a;

            cout << N - (upper_bound(v.begin(), v.end(), a) - v.begin()) << "\n";
        }
        else if(Q == 3) {
            int a, b; cin >> a >> b;

            cout << upper_bound(v.begin(), v.end(), b)
                     - lower_bound(v.begin(), v.end(), a) << "\n";
        }
    }
}
