#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    cout << fixed << setprecision(1);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<double> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        vector<double> u(N);
        for(int i=0; i<min(N, (int)3); i++) u[i] = v[i];

        for(int i=3; i<N; i++)
            for(int j=0; j<=i-3; j++) u[i] = max(u[i], u[j] + v[i]);

        double ans = 0;
        for(int i=N-1; i>=max(N-3, (int)0); i--) ans = max(ans, u[i]);

        cout << ans << "\n";
    }
}
