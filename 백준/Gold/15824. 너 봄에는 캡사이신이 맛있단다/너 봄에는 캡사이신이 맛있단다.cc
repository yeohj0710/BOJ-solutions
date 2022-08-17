#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int mod = 1e9 + 7;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> u(N); u[0] = v[0];
    for(int i=1; i<N; i++) u[i] = u[i-1] + v[i];

    vector<int> w(N); w[N-1] = v[N-1];
    for(int i=N-2; i>=0; i--) w[i] = w[i+1] + v[i];

    int ans = 0;

    for(int i=0; i<N; i++) {
        int val = (w[N-1-i] - u[i]) % mod, ba = 2, ex = i;

        while(ex > 0) {
            if(ex % 2 == 1) val = (val * ba) % mod;

            ba = (ba * ba) % mod;
            ex /= 2;
        }

        ans = (ans + val) % mod;
    }

    cout << ans << "\n";
}
