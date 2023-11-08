#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(4);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        v[x]++;
    }

    int ans = 0, val = 0;

    val = min(v[0], v[3]);
    ans += val * 3;
    v[0] -= val, v[3] -= val;

    val = min(v[1], v[2]);
    ans += val * 3;
    v[1] -= val, v[2] -= val;

    val = min(v[0], v[2]);
    ans += val * 2;
    v[0] -= val, v[2] -= val;

    val = min(v[1], v[3]);
    ans += val * 2;
    v[1] -= val, v[3] -= val;

    val = min(v[0], v[1]);
    ans += val * 1;
    v[0] -= val, v[1] -= val;

    val = min(v[2], v[3]);
    ans += val * 1;
    v[2] -= val, v[3] -= val;

    cout << ans << "\n";
}
