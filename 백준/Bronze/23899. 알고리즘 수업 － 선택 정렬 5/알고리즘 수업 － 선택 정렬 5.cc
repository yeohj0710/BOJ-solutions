#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    if(v == u) {
        cout << 1 << "\n";
        return 0;
    }

    for(int i=N-1; i>=0; i--) {
        int Max = INT_MIN, idx;
        for(int j=0; j<=i; j++) {
            if(v[j] > Max) {
                Max = v[j];
                idx = j;
            }
        }
        if(Max != v[i]) {
            swap(v[i], v[idx]);

            if(v == u) {
                cout << 1 << "\n";
                return 0;
            }
        }
    }

    cout << 0 << "\n";
}
