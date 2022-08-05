#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double tot; int N;
    cin >> tot >> N;

    vector<double> v;

    while(N--) {
        int M; double r;
        cin >> M >> r;

        while(M--) {
            v.push_back(2.0 * M_PI * r);
        }
    }

    sort(v.begin(), v.end());

    int ans = 0;

    for(int i=0; i<v.size(); i++) {
        if(tot - v[i] < 0) break;

        tot -= v[i];
        ans++;
    }

    cout << ans << "\n";
}
