#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    cout << fixed << setprecision(4);

    int N; cin >> N;

    double ans = 0;

    for(int i=1; i<=N; i++) ans += (double)N / i;

    cout << ans << "\n";
}
