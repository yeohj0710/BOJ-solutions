#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        for(int i=N-1; i>=0; i--) cout << v[i] << "\n";

        cout << 0 << "\n";
    }
}
