#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<double> v(N);

    for(int i=0; i<N; i++) {
        string str; cin >> str >> v[i];
    }

    sort(v.begin(), v.end(), greater<double>());

    double ans = 0;

    for(int i=0; i<N; i++) ans += v[i] * (i + 1);

    cout << fixed;
    cout.precision(4);

    cout << ans << "\n";
}
