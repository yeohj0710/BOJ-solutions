#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<double> v(N);

    for(int i=0; i<N; i++) {
        double x, y, z; cin >> x >> y >> z;

        v[i] = sqrt(x*x + y*y + z*z);
    }

    sort(v.begin(), v.end());
    
    cout << fixed;
    cout.precision(6);

    cout << v[M-1] << "\n";
}
