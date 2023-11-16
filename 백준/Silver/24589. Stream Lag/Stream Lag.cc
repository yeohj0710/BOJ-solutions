#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        v[b] = a;
    }

    int cur = 1, ans = 0;

    for(int i=1; i<=N; i++) {
        if(v[i] <= cur) cur++;
        else {
            cur++;
            ans++;
            i--;
        }
    }

    cout << ans << "\n";
}
