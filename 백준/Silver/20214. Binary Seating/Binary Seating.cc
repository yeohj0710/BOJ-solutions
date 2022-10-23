#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(6);

    vector<int> v(41);
    v[0] = 1;

    for(int i=1; i<=40; i++) v[i] = v[i-1] * 2;

    int N; cin >> N;

    vector<int> u(N);
    for(int i=0; i<N; i++) cin >> u[i];

    sort(u.begin(), u.end());

    double ans = 0;

    for(int i=0; i<N; i++) ans += u[i] * v[i];

    ans /= v[N];

    cout << ans << "\n";
}
