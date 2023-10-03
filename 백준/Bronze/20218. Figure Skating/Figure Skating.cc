#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    if(v == u) {
        cout << "suspicious\n";
        return 0;
    }

    int mx = 0; string ans;

    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            if(v[i] == u[j] && i - j > mx) {
                mx = i - j;
                ans = v[i];
            }

    cout << ans << "\n";
}
