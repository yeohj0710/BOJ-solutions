#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(6);
    for(int i=0; i<6; i++) cin >> v[i];

    int a, b; cin >> a >> b;

    int ans = 0;

    for(int i=0; i<6; i++) {
        if(v[i] == 0) continue;

        ans += (v[i] - 1) / a + 1;
    }

    cout << ans << "\n";

    cout << N / b << " " << N % b << "\n";
}
