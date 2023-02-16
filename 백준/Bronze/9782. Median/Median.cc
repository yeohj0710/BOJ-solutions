#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << fixed << setprecision(1);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        cout << "Case " << t << ": ";

        if(N % 2 == 0) cout << (v[N/2 - 1] + v[N/2]) / 2 << "\n";
        else cout << v[N/2] << "\n";
    }
}
