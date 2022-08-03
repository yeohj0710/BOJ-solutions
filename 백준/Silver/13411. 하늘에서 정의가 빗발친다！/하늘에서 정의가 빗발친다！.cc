#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<double, int>> v(N);

    for(int i=0; i<N; i++) {
        int a, b, c; cin >> a >> b >> c;

        v[i].first = sqrt(a*a + b*b)/c;
        v[i].second = i;
    }

    if(N == 1) {
        cout << 1 << "\n";
        return 0;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++)
        cout << v[i].second + 1 << "\n";
}
