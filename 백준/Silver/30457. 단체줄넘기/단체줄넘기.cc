#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(1001);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    int ans = 0;

    for(int i=1; i<=1000; i++) {
        if(v[i] > 0) {
            v[i]--;
            ans++;
        }
    }

    for(int i=1; i<=1000; i++) {
        if(v[i] > 0) {
            v[i]--;
            ans++;
        }
    }

    cout << ans << "\n";
}
