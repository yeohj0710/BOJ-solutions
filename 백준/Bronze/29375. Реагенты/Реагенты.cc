#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    double ans = v[0];

    for(int i=1; i<N; i++)
        ans = (ans + v[i]) / 2;

    cout << fixed << setprecision(9);
    cout << ans << "\n";
}
